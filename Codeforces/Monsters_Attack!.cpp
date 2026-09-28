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
    vector<ll> x(n);
    vector<ll> y(n);
    for(ll i=0; i<n; i++){
        cin >> y[i];
    }
    for(ll i=0; i<n; i++){
        cin >> x[i];
    }
    vector<ll> v(n+1);
    for(ll i=0; i<n; i++){
        v[abs(x[i])] += y[i];
    }
    bool flag = true;
    ll lft = 0;
    for(ll i=1; i<=n; i++){
        lft += k;
        if(v[i] > lft){
            cout<<"NO"<<endl;
            flag = false;
            break;
        }
        else{
            lft -= v[i];
        }
    }
    if(flag){
        cout<<"YES"<<endl;
    }
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}