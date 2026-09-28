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

bool checker(ll x, vector<ll>& v, ll n, ll t){
    ll sum = 0;
    for(int i = 0; i < n; i++){
        sum += x / v[i];
        if(sum >= t){
            return true;
        }
    }
    return sum >= t;
}

int main(){
    ll n, t;
    cin >> n >> t;
    vector<ll> v(n);
    //ll maxi = 1e16;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        //maxi = max(maxi, v[i]);
    }
    ll l = 1;
    ll h = 1e18;
    ll ans = 1e18;
    while(l <= h){
        ll mid = (l + h) / 2;
        if(checker(mid, v, n, t)){
            ans = min(ans, mid);
            h = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    cout << ans << endl;
}