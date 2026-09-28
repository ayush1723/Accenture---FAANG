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


bool checker(vector<ll>& v, ld x, ll k){
    ll sum = 0;
    for(ll i=0; i<v.size(); i++){
        sum += v[i] / x;
        if(sum >= k) return true;
    }
    return false;
}
void solve(){
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for(ll i=0; i<n; i++){
        cin >> v[i];
    }
    ld l = 0;
    ld h = 1e9;
    ld error = 1e-7;
    ld ans = 0;
    while(h - l > error){
        ld mid = (l + h) / 2;
        if(checker(v, mid, k)){
            ans = max(ans, mid);
            l = mid + error;
        }
        else{
            h = mid - error;
        }
    }
    cout << setprecision(7) << fixed << ans << endl;
}
int main(){
    solve();
}