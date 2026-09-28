#include<bits/stdc++.h>
using namespace std;

//////////////////////////<-Template->//////////////////////////
#define ll long long int
#define ull unsigned long long
#define ld long double
#define pii pair<int, int>
#define pll pair<long long, long long>
#define PI 3.1415926535897932384626433832795
#define F first
#define S second
#define pb push_back
///////////////////////<-Data Struture->////////////////////////
#define vii vector<int>
#define vll vector<long long>
#define mp map<int, int>
#define mpl map<long long, long long>
#define pq priority_queue<int>
#define pql priority_queue<long long>
#define st set<int> 
#define stl set<long long>
///////////////////////<-Daily use->////////////////
#define MOD 1000000007


void solve(){
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++){
        cin >> v[i];
    }
    mpl seen;
    for(ll i=0; i<n; i++){
        seen[v[i]]++;
    }
    ll maxi = 0;
    for(auto i : seen){
        maxi = max(maxi, i.second);
    }
    if(maxi - n == 0){
        cout << 0 << endl;
        return;
    }
    ll l = 0;
    ll r = 32;
    ll ans = 1e9;
    while(l <= r){
        ll mid = (l + r) / 2;
        ll x = (ll)(maxi * (pow(2, mid) - 1));
        if(x >= abs(n - maxi)){
            ans = min(ans, mid);
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    cout << ans + abs(maxi - n) << endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}