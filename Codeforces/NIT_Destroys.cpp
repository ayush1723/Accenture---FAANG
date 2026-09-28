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
    if(n == 1 && v[0] != 0){
        cout << 1 << endl;
        return;
    }
    int flag = 1;
    for(int i=0; i<n; i++){
        if(v[i] != 0){
            flag = 0;
        }
    }
    if(flag == 1){
        cout << 0 << endl;
        return;
    }
    ll l = 0;
    ll r = n-1;
    while(l < n){
        if(v[l] != 0){
            break;
        }
        l++;
    }
    while(r >= 0){
        if(v[r] != 0){
            break;
        }
        r--;
    }
    int flagg = 1;
    while(l <= r){
        if(v[l] == 0 || v[r] == 0){
            flagg = 0;
            break;
        }
        l++;
        r--;
    }
    if(flagg == 1){
        cout << 1 << endl;
    }
    else{
        cout << 2 << endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}