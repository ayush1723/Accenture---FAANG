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
    for(ll i=0; i<n; i++) cin >> v[i];
    if(k == 1){
        cout << 0 << endl;
        return;
    }
    for(ll i=0; i<n; i++){
        v[i] = v[i] % k;
    }
    cout << *max_element(v.begin(), v.end()) - *min_element(v.begin(), v.end()) << endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}