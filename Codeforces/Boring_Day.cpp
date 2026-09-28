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

//mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
//ll getRandomNumber(ll l, ll r) {return uniform_int_distribution<ll>(l, r)(rng);}

//<------------------------------------------------------------------------------------------------------------------------------------------------------------>//

void debugll(vector<ll> &v){
    for(ll i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

void debug(vector<int> &v){
    for(ll i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

void solve(){
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    vector<ll> b(k);
    for(ll i = 0; i < n; i++) cin >> v[i];
    for(ll i = 0; i < k; i++) cin >> b[i];


    for(ll i = 0; i < k; i++){
        ll l = 0, r = n;
        ll ele = b[i];
        bool flag = true;
        for(int q = 0; q < 20; q++){
            ll mid = (l + r) / 2;
            if(v[mid] <= ele){
                l = mid;
            }
            else{
                r = mid;
            }
        }
        cout << l << endl;
    }
    return;
}
int main(){
    solve();
}