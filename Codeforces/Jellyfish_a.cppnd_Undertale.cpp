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
    ll a, b, n;
    cin >> a >> b >> n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++){
        cin >> v[i];
    }
    ll sum = 0;
    if(b > 1){
        sum += b-1;
        b = 1;
    }
    for(ll i=0; i<n; i++){
        if(b == 1){
            b = min(a, b+v[i]);
        }
        if(i == n-1){
            sum += b;
            b = 1;
            continue;
        }
        sum += b - 1;
        b = 1;
    }
    cout << sum << endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}