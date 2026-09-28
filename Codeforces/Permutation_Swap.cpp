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
    map<ll, ll> seen;
    for(ll i=0; i<n; i++){
        cin >> v[i];
        seen[v[i]] = i+1;
    }
    ll cnt = INT_MAX;
    for(ll i=0; i<n; i++){
        if(v[i] == i+1){
            continue;
        }
        else{
            ll x = seen[i+1];
            ll temp = v[x-1];
            v[x-1] = v[i];
            v[i] = temp;
            seen[v[i]] = i + 1;
            seen[v[x-1]] = x;
            cnt = min(cnt, (x - i - 1));
        }
    }
    cout << cnt << endl;
}
int main(){
    // 
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}