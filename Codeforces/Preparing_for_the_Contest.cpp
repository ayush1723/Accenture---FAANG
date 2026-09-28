#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    int x = n - k;
    int q = x+1;
    while(x){
        cout<<x<<" ";
        x--;
    }
    while(q<=n){
        cout<<q<<" ";
        q++;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}