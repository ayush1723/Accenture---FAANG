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
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    vector<ll> ans(n);
    ll j = 0;
    for(ll i=0; i<n; i++){
        cin >> v[i];
        if(v[i] % k == 0){
            v[i] = 0;
            ans[j++] = i+1;
        }
    }
    vector<pair<ll, ll> > c(n);
    for(ll i=0; i<n; i++){
        c[i].first = v[i];
        c[i].second = i+1;
    }
    sort(c.begin(), c.end(), sortbysec);
    for(ll i=0; i<n; i++){
        if(c[i].first > 0){
            ans[j++] = c[i].second;
        }
    }
    for(ll i=0; i<n; i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}