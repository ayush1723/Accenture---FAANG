#include "bits/stdc++.h"
using namespace std;
#define int long long int
#define double long double
#define endl '\n'
const int MOD = 1000000007;

void solve(){
    int n;
    cin>>n;
    if (n==1){
        cout<<1<<endl;
        return;
    }
    if (n==2){
        cout<<-1<<endl;
        return;
    }
    stack<int> odds,evens;
    for (int i = 1; i <= n*n; i++) {
        if (i&1) odds.push(i);
        else evens.push(i);
    }
    bool check = false;
    vector<vector<int>> mat(n,vector<int> (n,0));
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j <= i; j++) {
            if (!odds.empty()){
                mat[i][j] = odds.top();
                odds.pop();
                count++;
            } else break;
        }
        if ((i+count)%2==0) check = true;
    }
    if (check){
        mat[0][n-2] =  mat[n-2][n-2];
        mat[n-2][n-2] = 0;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (mat[i][j]==0){
                mat[i][j] = evens.top();
                evens.pop();
            }
        }
    }
    for(auto row: mat){
        for(int x: row){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int t=1;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}