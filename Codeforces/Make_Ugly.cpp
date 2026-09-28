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
    for(ll i=0; i<n; i++){
        cin >> v[i];
    }
    if(n == 1){
        cout << -1 << endl;
        return;
    }
    bool flag = true;
    for(ll i=0; i<n-1; i++){
        if(v[i] != v[i+1]){
            flag = false;
            break;
        }
    }
    if(flag){
        cout << -1 << endl;
        return;
    }
    vector<ll> prefix(n);
    vector<ll> suffix(n);
    ll cnt = 0;
    ll ele = v[0];
    for(ll i=0; i<n; i++){
        prefix[i] = cnt;
        if(v[i] == ele){
            cnt++;
        }
        else{
            cnt = 0;
        }
    }
    cnt = 0;
    for(ll i=n-1; i>=0; i--){   
        suffix[i] = cnt;
        if(v[i] == ele){
            cnt++;
        }
        else{
            cnt = 0;
        }
    }
    ll mini = 1e6;
    for(ll i=1; i<n-1; i++){
        if(v[i] != ele){
            mini = min(mini, min(prefix[i], suffix[i]));
        }
    }
    cout << mini << endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}