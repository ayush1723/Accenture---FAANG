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
    ll n, cnt = 0;
    cin >> n;
    vector<ll> v(n+1);
    map<ll, ll> seen;
    for(ll i=1; i<=n; i++){
        cin >> v[i];
        seen[v[i]]++;
    }
    sort(v.begin(), v.end());
    for(ll i = (n + 1)/2; i <= n; i++){
        if(v[i] == v[(n+1)/2]){
            cnt++;
        }
        else{
            break;
        }
    }
    cout << cnt << endl;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}