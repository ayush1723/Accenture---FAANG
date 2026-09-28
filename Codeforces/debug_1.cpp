#include<bits/stdc++.h>
using namespace std;
using namespace chrono;

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

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
ll getRandomNumber(ll l, ll r) {return uniform_int_distribution<ll>(l, r)(rng);}

//<------------------------------------------------------------------------------------------------------------------------------------------------------------>//

// void debugll(vector<ll> &v){
//     for(ll i = 0; i < v.size(); i++){
//         cout << v[i] << " ";
//     }
//     cout << endl;
// }

// void debug(vector<int> &v){
//     for(ll i = 0; i < v.size(); i++){
//         cout << v[i] << " ";
//     }
//     cout << endl;
// }

// void slo(int n, int l, int h){
//     if((((h - l) * 2) - 1) < n){
//         cout << -1 << endl;
//     }
//     int x;
//     if(n <= h - l + 1){
//         x = 2;
//     }
//     else{
//         x = n - (h - l);
//     }
//     vector<int> v;
//     int y = h - x + 1;
//     for(int i = 0; i < x; i++){
//         v.push_back(y++);
//     }
//     y = h - 1;
//     for(int i = 0; i < h - l; i++){
//         v.push_back(y--);
//     }

//     for(int i=0; i<n; i++){
//         cout << v[i] << " ";
//     }
//     cout << endl;
// }


vector<int> CS(int n, int lo, int hi){
    if((((hi - lo) * 2) - 1) < n){
        return -1;
    }

    int x;

    if(n <= (hi - lo + 1)){
        x = 2;
    }
    else{
        x = n - (hi - lo);
    }

    vector<int> v(n);

    int y = h - x + 1;
    for(int i=0; i<x; i++){
        v[i] = y++;
    }
    
    y = hi - 1;
    for(int i = x; i < n; i++){
        v[i] = y--;
    }

    return v;
}
void solve(){
    int n, h, l;
    cin >> n >> h >> l;
    vector<int> v = CS(n, l, h);
    for(int i =0; i<n; i++){
        cout << v[i] << " ";
    }
    cout << endl;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}