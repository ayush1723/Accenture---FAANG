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



// bool checker(ll x, vector<ll> nv, vector<ll> tv){
//     ll i = 0;
//     ll j = 0;
//     while(i < nv.size() && j < tv.size()){
//         ll num = abs(nv[i] - tv[j]);
//         if(num <= x){
//             i++;
//         }
//         else{
//             j++;
//         }
//     }
//     if(i == nv.size()){
//         return true;
//     }
//     else{
//         return false;
//     }
// }

void solve_2(ll n, ll t, vector<ll>& nv, vector<ll>& tv){
    ll i = 0; 
    ll j = 0;
    vector<ll> v;
    while(i < nv.size() && j < tv.size()){
        ll an = 2e9;
        while(true){
            ll x = abs(nv[i] - tv[j]);
            if(x < an){
                x = an;
                i++;
            }
            else{
                j++;
                v.push_back(an);
                break;
            }
        }
    }
    if(tv[tv.size()-1] < nv[nv.size() - 1]){
        v.push_back(abs(nv[nv.size() - 1] - tv[tv.size() - 1]));
    }
    if(tv[0] > nv[0]){
        v.push_back(abs(nv[0] - tv[0]));
    }
    int maxi = INT_MIN;
    for(int i=0; i<v.size(); i++){
        if(maxi < v[i]){
            maxi = v[i]; 
        }
    }
    cout << maxi << endl;
}

void solve(){
    ll n, t;
    cin >> n >> t;
    vector<ll> nv(n);
    vector<ll> tv(t);
    //solve_2(n, t, nv, tv);
    for(ll i=0; i<n; i++){
        cin >> nv[i];
    }
    for(ll i=0; i<t; i++){
        cin >> tv[i];
    }
    solve_2(n, t, nv, tv);
    // ll l = 0;
    // ll h = 2e9;
    // ll ans = -1;
    // while(l <= h){
    //     ll mid = (l + h) / 2;
    //     if(checker(mid, nv, tv)){
    //         ans = mid;
    //         h = mid - 1;
    //     }
    //     else{
    //         l = mid + 1;
    //     }
    // }
    // cout << ans << endl;
}

int main(){
    solve();
}