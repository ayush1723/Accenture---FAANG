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
    for(ll i=0; i<n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    if(n == 1){
        cout << 0 << endl;
        return;
    }
    ll lc = 1;
    ll cnt = 0;
    for(ll i=0; i<n-1; i++){
        if(abs(v[i] - v[i+1]) <= k){
            lc++;
        }
        else{
            cnt = max(lc, cnt);
            lc = 1;
        }
    }
    cnt = max(cnt, lc);
    cout << abs(n - cnt) << endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}