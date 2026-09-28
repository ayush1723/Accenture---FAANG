#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pii pair<int, int>
#define pll pair<long long, long long>

void solve(){
    int n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    // for(auto it : v) {
    //     cout<<v[it]<<" ";
    // }
    // for(int i=0; i<n; i++){
    //     cout<<v[i]<<" ";
    // }
    for(auto i : v){
        cout<<i<<" ";
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}