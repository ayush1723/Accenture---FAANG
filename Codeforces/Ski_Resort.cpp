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
    ll n, k, q;
    cin >> n >> k >> q;
    vector<ll> v(n);
    vector<ll> ans;
    for(ll i=0; i<n; i++) cin >> v[i];
    for(ll i=0; i<n; i++){
        ll sum = 0;
        if(v[i] <= q){
            for(ll j=i; j<n; j++){
                i = j;
                if(v[j] <= q){
                    sum++;
                }
                else{
                    break;
                }
            }
            ans.push_back(sum);
        }
    }
    // for(ll i=0; i<ans.size(); i++){
    //     cout << ans[i] << " ";
    // }
    // cout << endl;
    ll res = 0;
    for(ll i=0; i<ans.size(); i++){
        if(ans[i] >= k){
            ll x = ans[i] + 1;
            int j = k;
            while(x >= k && (x - j) != 0){
                res = res + (x - j++);
            }
        }
    }
    cout << res << endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}