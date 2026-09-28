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
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for(ll i=0; i<n; i++){
        cin >> v[i];
    }
    ll i = 0;
    ll j = n-1;
    ll cnt = 0;
    while(i < j){
        if(v[i] + v[j] <= k){
            if(v[i] <= v[j]){
                v[j] -= v[i];
                if(v[j] == 0){
                    cnt++;
                    j--;
                }
                k -= 2 * v[i];
                cnt++;
                i++;
            }
            else{
                v[i] -= v[j];
                k -= 2 * v[j];
                cnt++;
                j--;
            }
        }
        else{
            break;
        }
    }
    while(v[i] * 2 - 1<= k && k > 0 && i < j){
        cnt++;
        v[j] -= v[i];
        k -= 2 * v[i];
        i++;
    }
    if(i == j){
        if(v[i] <= k){
            cnt++;
        }
    }
    cout << cnt << endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}