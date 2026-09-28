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
    ll n, m;
    cin >> n;
    vector<ll> v(n);
    for(ll i = 0; i < n; i++){
        cin >> v[i];
    }
    cin >> m;
    vector<ll> b(m);
    for(ll i = 0; i < m; i++){
        cin >> b[i];
    }
    vector<pair<ll, ll> > c;
    pair<ll, ll> p;
    p.first = 1;
    p.second = v[0];
    c.push_back(p);
    for(ll i = 1; i < n; i++){
        p.first = p.second + 1;
        p.second = v[i] + (p.first - 1);
        c.push_back(p);
    }
    vector<ll> a(m);
    for(int i = 0; i < m; i++){
        ll l = 0;
        ll r = n;
        while(l <= r){
            ll mid = (l + r) / 2;
            if(b[i] >= c[mid].first && b[i] <= c[mid].second){
                a[i] = mid + 1;
                break;
            }
            else if(b[i] < c[mid].second){
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }
    }
    for(int i = 0; i < m; i++){
        cout<<a[i]<<endl;
    }
}
int main(){
    solve();
}