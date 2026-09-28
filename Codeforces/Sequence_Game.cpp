#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    if(n == 1){
        cout<<1<<endl;
        cout<<v[0]<<endl;
        return;
    }
    vector<ll> res;
    res.push_back(v[0]);
    for(int i=1; i<n; i++){
        if(v[i] >= v[i-1]){
            res.push_back(v[i]);
        }
        else{
            res.push_back(v[i]);
            res.push_back(v[i]);
        }
    }
    cout<<res.size()<<endl;
    for(int i=0; i<res.size(); i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}