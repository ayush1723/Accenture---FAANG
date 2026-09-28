#include<bits/stdc++.h>
using namespace std;

class Node {
    public:

    int data;
    Node* next;

    Node (int data) {
        this->data = data;
        this->next = NULL;
    }
};

void print(Node* head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << "\n";
}

Node* takeInput() {
    int data;
    cin >> data;
    Node* head = NULL;
    Node* tail = NULL;

    while(data != -1) {
        Node* newNode = new Node(data);

        if(head == NULL) {
            head = newNode;
            tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = tail->next;
        }

        cin >> data;
    }

    return head;
}

// head Pointer is passed by Reference::
void insertElement(Node*& head, int length, int data) {
    if(length == 0) {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* temp = head;

    int i = 0;
    while(i < length - 1 && temp != NULL) {
        i++;
        temp = temp->next;
    }

    Node* newNode = new Node(data);

    newNode->next = temp->next;
    temp->next = newNode;
}

int main() {
   Node* head = takeInput();

   cout << "Actual Linked-List\n";
   print(head);

   insertElement(head, 0, 100);
   
   cout << "Linked-List After Modification\n";
   print(head);
}