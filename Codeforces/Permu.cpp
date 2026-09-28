// #include<bits/stdc++.h>
// using namespace std;

// //////////////////////////<-Template->//////////////////////////
// #define ll long long int
// #define ull unsigned long long
// #define ld long double
// #define pii pair<int, int>
// #define pll pair<long long, long long>
// #define PI 3.1415926535897932384626433832795
// #define F first
// #define S second
// #define pb push_back
// ///////////////////////<-Data Struture->////////////////////////
// #define vii vector<int>
// #define vll vector<long long>
// #define mp map<int, int>
// #define mpl map<long long, long long>
// #define pq priority_queue<int>
// #define pql priority_queue<long long>
// #define st set<int> 
// #define stl set<long long>
// ///////////////////////<-Daily use->////////////////
// #define MOD 1000000007


// void solv(){
//     int n, m;
//     cin >> n >> m;
//     vector<vector<int> > a;
//     vector<vector<int> > b;
//     for(int i=0; i<n; i++){
//         vector<int> v;
//         for(int j=0; j<m; j++){
//             int x;
//             cin >> x;
//             v.push_back(x);
//         }
//         a.push_back(v);
//     }
//     for(int i=0; i<n; i++){
//         vector<int> v;
//         for(int j=0; j<m; j++){
//             int x;
//             cin >> x;
//             v.push_back(x);
//         }
//         b.push_back(v);
//     }
//     unordered_map<int, int> seen;
//     for(int i=0; i<m; i++){
//         seen[a[0][i]] = i + 1;
//     }
//     int row = 0;
//     bool flag = false;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             if(seen[b[i][j]] > 0){
//                 row = i;
//                 flag = true;
//                 break;
//             }
//         }
//         if(flag){
//             break;
//         }
//     }
//     int k = 0;
//     for(int i=0; i<m; i++){
//         unordered_map<int, int> sc;
//         for(int i=row; i>=0; i--){
//             sc[b[i][k]]++;
//         }
//         for(int i=row + 1; i < n; i++){
//             sc[b[i][k]]++;
//         }
//         int x = seen[b[row][k]];
//         x--;
//         for(int i=0; i<n; i++){
//             if(sc[a[i][x]] == 0){
//                 cout << "NO\n";
//                 return;
//             }
//         }
//         k++;
//     }
//     cout << "YES\n";
// }
// int main(){
//     ll t;
//     cin>>t;
//     while(t--){
//         solv();
//     }
// }


#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
const int N = 6e5 + 10;
int r[N];
int c[N];
 
map<pair<int,int>,int> cnt1,cnt2;
set<pair<int,int>> s1,s3;
 
int main(){
    int t;
    cin>>t;
 
    while(t--){
        cnt1.clear();
        cnt2.clear();
        set<pair<int,int>> s1,s2;
 
        int n,m;
        cin>>n>>m;
 
        for (int i=1;i<=n;i++){
            for (int j=1;j<=m;j++){
                int a;
                cin>>a;
                r[a] = i;
                c[a] = j;
            }
        }
 
        for (int i=1;i<=n;i++){
            for (int j=1;j<=m;j++){
                int a;
                cin>>a;
                if (r[a] != i)
                    cnt1[{r[a],i}]++;
                if (c[a] != j)
                    cnt2[{c[a],j}]++;
            }
        }
 
        bool ans = 1;
 
        for (auto [i,j] : cnt2)
            ans &= (j == n);
 
        for (auto [i,j] : cnt1)
            ans &= (j == m);
 
        if (ans)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}




// usings set <very easy>

int n,m;
    cin>>n>>m;
    int a[n][m];
    int b[n][m];
    fin(i,0,n)
    {
        fin(j,0,m)cin>>a[i][j];
    }
    fin(i,0,n)
    {
        fin(j,0,m)cin>>b[i][j];
    }
    set<set<int>> rowa;
    set<set<int>> rowb;
    for(int i=0;i<n;i++)
    {
        set<int> temp1;
        set<int> temp2;
        for(int j=0;j<m;j++)
        {
            temp1.insert(a[i][j]);
            temp2.insert(b[i][j]);
        }
        rowa.insert(temp1);
        rowb.insert(temp2);

    }
    set<set<int>> cola;
    set<set<int>> colb;
    for(int j=0;j<m;j++)
    {
        set<int> temp1;
        set<int> temp2;
        for(int i=0;i<n;i++)
        {
            temp1.insert(a[i][j]);
            temp2.insert(b[i][j]);
        }
        cola.insert(temp1);
        colb.insert(temp2);

    }
 
    if(rowa==rowb&&(cola==colb))cout<<"YES"<<el;
    else cout<<"NO"<<el;