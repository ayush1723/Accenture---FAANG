#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int checker(vector<ll>& v, int n){
    map<ll, ll> seen;
    int q=1;
    while(q < INT_MAX){
        for(int i=0; i<n; i++){
            ll x = v[i] % q;
            seen[x]++;
        }
        if(seen.size() == 2){
            break;
        }
        q++;
    }
    if(seen.size() == 2){
        return q;
    }
    return 0;
}
void solve(){
    int n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    int result = checker(v, n);
    cout<<result<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}