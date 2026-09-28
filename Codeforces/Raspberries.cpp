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
    int k;
    cin >> n >> k;
    vector<int> v(n);
    ll even = 0;
    ll pro = 1;
    for(ll i=0; i<n; i++){
        cin >> v[i];
        if(v[i] % 2 == 0){
            even++;
        }
        pro *= v[i];
    }
    if(k != 4){
        if(pro % k == 0){
            cout << 0 << endl;
        }
        else{
            int maxi = INT_MIN;
            for(ll i=0; i<n; i++){
                maxi = max(maxi, v[i] % k);
            }
            cout << abs(k - maxi) << endl;
        }
    }
    else{
        if(pro % 4 == 0){
            cout << 0 << endl;
        }
        else if(even == 1){
            cout << 1 << endl;
        }
        else{
            int maxi = INT_MIN;
            for(ll i=0; i<n; i++){
                maxi = max(maxi, v[i] % k);
            }
            cout << min(abs(k - maxi), 2) << endl;
        }
    }
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}