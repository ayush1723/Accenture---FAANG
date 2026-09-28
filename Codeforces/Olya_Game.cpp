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
    ll mini_1 = 1e9;
    ll mini_2 = 1e9;
    ll ans = 0;
    for(ll i=0; i<n; i++){
        cin >> v[i];
        vector<ll> b(v[i]);
        for(ll j=0; j<v[i]; j++){
            cin >> b[j];
        }
        sort(b.begin(), b.end());
        mini_1 = min(mini_1, b[0]);
        mini_2 = min(mini_2, b[1]);
        ans += b[1];
    }
    ans = ans - mini_2;
    ans = ans + mini_1;
    cout << ans << endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}