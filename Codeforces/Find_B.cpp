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
    ll n, q;
    cin >> n >> q;
    vector<ll> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    vector<pair<ll, ll> > b;
    for(ll i=0; i<q; i++){
        ll x, y;
        cin >> x >> y;
        pair<ll, ll> p;
        p.first = x;
        p.second = y;
        b.push_back(p);
    }
    for(ll i=0; i<q; i++){
        ll sum_1 = 0;
        ll sum_2 = 0;
        ll sum = 0;
        for(ll j=b[i].first-1; j<b[i].second; j++){
            if(v[j] == 1){
                sum_1 += 2;
            }
            else{
                sum_2 += v[j];
            }
            sum += v[j];
        }
        if(abs(b[i].first - b[i].second) == 0){
            cout<<"NO"<<endl;
        }
        else if(sum - sum_1 <= sum_2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}