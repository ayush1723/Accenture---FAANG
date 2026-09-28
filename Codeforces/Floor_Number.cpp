#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,x;
    cin>>n>>x;
    n = n - 2;
    int cnt = 1;
    if(n <= 0){
        cout<<cnt<<endl;
        return;
    }
    int q = n / x;
    int r = n % x;
    if(r == 0){
        cnt += q;
    }
    else{
        cnt += q;
        cnt += 1;
    }
    cout<<cnt<<endl;
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}