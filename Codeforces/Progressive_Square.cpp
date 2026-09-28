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
    ll n, c, d;
    cin >> n >> c >> d;
    vector<ll> v(n*n);
    vector<ll> b(n*n);
    for(ll i=0; i<n*n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    b[0] = v[0];
    ll p = 0;
    for(ll i=1; i<n; i++){
        b[i] = b[i-1] + d;
        p = i;
    }
    p++;
    for(ll i=0; i<n; i++){
        ll k = b[i];
        for(ll j=1; j<n; j++){
            k = k + c;
            b[p] = k;
            p++;
        }
    }
    sort(b.begin(), b.end());
    if(v == b){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}