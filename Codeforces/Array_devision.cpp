#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define ll long long int
 
bool checker(ll x, vector<ll>& v, int n, int k){
    int worker = 1;
    ll curr_sum = 0;
    for(int i=0; i<n; i++){
        if(v[i] > x){
            return false;
        }
        if(curr_sum + v[i] <= x){
            curr_sum += v[i];
        }
        else{
            worker++;
            curr_sum = v[i];
        }
    }
    return worker <= k;
}
int main(){
    int n,k;
    cin>>n>>k;
    vector<ll> v(n);
    ll l = 0, r = 0;
    for(int i=0; i<n; i++){
        cin>>v[i];
        l = max(l, v[i]);
        r += v[i];
    }
    ll ans = -1;
    while(l <= r){
        ll mid = (l + r) / 2;
        if(checker(mid, v, n,  k)){
            ans = mid;
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    cout<<ans<<endl;
}