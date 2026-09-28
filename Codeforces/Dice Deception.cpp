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
//#define st set<int> 
#define stl set<long long>
///////////////////////<-Daily use->////////////////
#define MOD 1000000007


void solve(){
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    multiset<ll> s;
    for(ll i=0; i<n; i++){
        cin >> v[i];
    }
    for(ll i=0; i<n; i++){
        s.insert(v[i]);
    }
    ll ans = 1e9;
    while(true){
        ll st = (*s.begin());
        ll lt = (*s.rbegin());
        ans = min(ans, lt - st);
        ll diff = lt - st;
        if(k > diff){
            break;
        }
        ll d = diff / k;
        st += (d * k);
        s.erase(s.begin());
        s.insert(st);
    }
    for(ll i=0; i<n; i++){
        ll st = (*s.begin());
        ll lt = (*s.rbegin());
        ans = min(ans, lt - st);
        st = st + k;
        s.erase(s.begin());
        s.insert(st);
    }
    cout << ans << "\n";
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}