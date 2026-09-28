#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool checker(ll x, vector<ll>& v, ll k){
    ll sum = 0;
    ll curr_worker = 1;
    for(int i=0; i<v.size(); i++){
        if(v[i] > x){
            return false;
        }
        if(sum + v[i] <= x){
            sum += v[i];
        }
        else{
            curr_worker++;
            sum = v[i];
        }
    }
    return curr_worker <= k;
}
int main(){
    int n,k;
    cin>>n>>k;
    vector<ll> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    ll l = 1;
    ll r = 1e16;
    ll ans = 1e16;
    while(l<r){
        ll mid = (l + r)/2;
        if(checker(mid, v, k)){
            ans = mid;
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    cout<<ans<<endl;
}