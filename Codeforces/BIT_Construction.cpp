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


ll Give_power(ll n){
    ll x = log2(n);
    return pow(2, x);
}

void solve(){
    ll n, k;
    cin >> n >> k;
    vector<int> v(n);
    if(n == 1){
        cout << k << endl;
        return;
    }
    else{
        ll x = Give_power(k + 1);
        ll i=0; 
        x--;
        v[i++] = x;
        v[i++] = k - x;
        while(i < n){
            v[i++] = 0;
        }
        for(ll i=0; i<n; i++){
            cout << v[i] << " ";
        }
        cout << endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}