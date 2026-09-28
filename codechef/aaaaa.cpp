#include<bits/stdc++.h>
using namespace std;

// class node {
//     public:
//     int data;
//     node *next;

//     node(int data) {
//         this->data = data;
//         this->next = NULL;
//     }
// };

// node *takeInput() {
//     int data;
//     cin >> data;
//     node *head = NULL;

//     while(data != -1) {
//         node *newNode = new node(data);
//         if(head == NULL) {
//             head = NULL;
//         }
//         else {
//             node *temp = head;
//             while(temp->next != NULL) {
//                 temp = temp->next;
//             }
//             temp->next = newNode;
//         }

//         cin >> data;
//     }

//     return head;
// }

// void print(node *head) {
//     node *temp = head;
//     while(temp != NULL) {
//         cout << temp->data << "-" << ">" << " ";
//         temp = temp -> next;
//     }
//     return;
// }

// void fun(int **p) {
//     static int q = 10;
//     *p = &q;
// }
// int x = 1;

class BinaryTreeNode {
    public:
    int data;
    BinaryTreeNode *left;
    BinaryTreeNode *right;

    BinaryTreeNode(int data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }

    ~BinaryTreeNode() {
        delete left;
        delete right;
    }
};

BinaryTreeNode *LevelWise() {
    int rootData;
    cin >> rootData;

    if(rootData == -1) {
        return NULL;
    }

    BinaryTreeNode *root = new BinaryTreeNode(rootData);
    queue<BinaryTreeNode *> pendingNodes;
    pendingNodes.push(root);

    while(pendingNodes.size() != 0) {
        BinaryTreeNode *front = pendingNodes.front();
        pendingNodes.pop();

        cout << "Enter Left Child of " << front -> data << "\n";

        int leftchild;
        cin >> leftchild;

        if(leftchild != -1) {
            BinaryTreeNode *child = new BinaryTreeNode(leftchild);
            front -> left = child;
            pendingNodes.push(child);
        }

        cout << "Enter Right Child of " << front -> data << "\n";

        int rightchild;
        cin >> rightchild;

        if(rightchild != -1) {
            BinaryTreeNode *child = new BinaryTreeNode(rightchild);
            front -> left = child;
            pendingNodes.push(child);
        }
    }

    return root;
}

BinaryTreeNode* TakeInput() { // this is Random Tree Input
    int rootData;
    cin >> rootData;

    if(rootData == -1) {
        return NULL;
    }

    BinaryTreeNode *root = new BinaryTreeNode(rootData);
    BinaryTreeNode *leftChild = TakeInput();
    BinaryTreeNode *rightChild = TakeInput();

    root -> left = leftChild;
    root -> right = rightChild;

    return root;
}

void printTree(BinaryTreeNode *root) {
    if(root == NULL) {
        return;
    }

    cout << root -> data << ": ";

    if(root -> left != NULL) {
        cout << "L" << ":" << root -> left -> data << ", ";
    }

    if(root -> right != NULL) {
        cout << "R" << ":" << root -> right -> data;
    }

    cout << "\n";

    printTree(root -> left);
    printTree(root -> right);
}

int main() {
    // BinaryTreeNode *root = new BinaryTreeNode(1);
    // BinaryTreeNode *child1 = new BinaryTreeNode(2);
    // BinaryTreeNode *child2 = new BinaryTreeNode(3);

    // root -> left = child1;
    // root -> right = child2;

    //BinaryTreeNode* root = TakeInput();

    BinaryTreeNode* root = LevelWise();

    printTree(root);
}



#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, k, d = 1, placementlelo = 0;
    cin >> n >> m;
    vector<set<int>> f(n);
    for (int i = 0, u, v; i < m; ++i) {
        cin >> u >> v;
        f[u].insert(v);
        f[v].insert(u);
    }


    cin >> k;
    vector<bool> w(n, true);
    placementlelo = n;
    while (placementlelo < k) {
        vector<bool> nw(n, false);
        for (int i = 0; i < n; ++i) {
            int cnt = 0;
            for (int fr : f[i]) cnt += w[fr];
            if (w[i] && cnt == 3) nw[i] = true;
            else if (!w[i] && cnt < 3) nw[i] = true;
        }

        w = nw;
        placementlelo += count(w.begin(), w.end(), true);
        ++d;
    }
    cout << d;
    return 0;
}
