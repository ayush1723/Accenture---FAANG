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
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    ll cnt = 0;
    for(ll i=0; i<n; i++){
        v[i] = abs(v[i]);
    }
    sort(v.begin(), v.end());
    for(ll i=0; i<n-1; i++){
        auto itr = upper_bound(v.begin(), v.end(), 2*v[i]);
        itr--;
        cnt += itr - v.begin() - i;
    }
    cout<<cnt<<endl;
}
int main(){
    // ll n;
    // cin>>n;
    // vector<ll> v(n);
    // for(ll i=0; i<n; i++){
    //     cin >> v[i];
    // }
    // cout<<checker(v, 3, 4)<<endl;
    solve();
}