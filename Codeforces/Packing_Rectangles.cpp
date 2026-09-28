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

bool checker(ll x, ll w, ll h, ll n){
    ll p = x / h;
    ll q = x / w;
    return p * q >= n;
}

void solve(){
    ll w, h, n;
    cin >> w >> h >> n;
    ll l = 1, r = 1;
    ll ans = 0;
    while(checker(r, w, h, n) == false){
        r *= 2;
    }
    while(l <= r){
        ll mid = (l + r) / 2;
        if(checker(mid, w, h, n)){
            ans = mid;
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    cout << ans << endl;
}

int main(){
    solve();
}




