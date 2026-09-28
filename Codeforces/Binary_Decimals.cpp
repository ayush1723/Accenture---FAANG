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


bool check(ll n){
    while(n != 0){
        if(n % 10 == 0 || n % 10 == 1){
            n = n / 10;
            continue;
        }
        else{
            return false;
        }
    }
    return true;
}
void solve(){
    ll n;
    cin >> n;
    vector<ll> v(1e5, 0);
    v[1] = 1;
    for(ll i=2; i<=1e5; i++){ 
        if(v[i] == 1){
            continue;
        }
        if(check(i)){
            v[i] = 1;
            ll j = i;
            while(j <= 1e5){
                v[j] = 1;
                j = j * j;
            }
        }
        else{
            v[i] = 0;
        }
    }
    if(v[n] == 1){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}