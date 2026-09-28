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
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> a(n);
    vector<ll> b(m);
    vector<ll> c;
    map<ll, ll> seen;
    for(ll i=0; i<n; i++){
        cin >> a[i];
    }
    for(ll i=0; i<m; i++){
        cin >> b[i];
        seen[b[i]]++;
    }
    for(ll i=0; i<n-m+1; i++){
        map<ll, ll> soon;
        int cnt = 0;
        for(ll j=i; j<m+i; j++){
            if(soon[a[j]] == 0 || soon[a[j]] < seen[a[j]]){
                soon[a[j]]++;
                if(seen[a[j]] > 0){
                    cnt++;
                }
            }
            else{
                continue;
            }
        }
        c.push_back(cnt);
    }
    ll cnt = 0;
    for(ll i=0; i<c.size(); i++){
        if(c[i] >= k){
            cnt++;
        }
    }
    cout << cnt << endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}