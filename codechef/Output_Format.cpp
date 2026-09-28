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

ll bin(ll n){
    ll l = 1;
    ll r = 1e6;
    ll ans = INT_MIN;
    while(l <= r){
        ll mid = ceil((l + r) / 2);
        if(mid <= n){
            ans = max(ans, l+r);
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }
    return ans;
}
void solve(){
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    ll maxi = v[n-1];
    for(ll i=n-2; i>=0; i--){
        ll local = bin(v[i]);
        maxi = max(local, maxi);
    }
    cout << maxi << endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}