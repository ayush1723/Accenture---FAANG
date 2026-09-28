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

void sieve(vector<ll>& v, ll n){
    for(ll i=2; i<n; i++){
        if(v[i] == 0){
            for(ll j = i*i; j<n; j+=i){
                v[j] = 1;
            }
        }
    }
    return;
}
void solve(){
    ll n;
    cin>>n;
    vector<ll> v(1000001, 0);
    sieve(v, 1000001);
    if(n % 2 == 0){
        int cnt = 0;
        int i = 2;
        while(cnt < n && i < 1e6){
            if(v[i] == 0){
                cout<<i<<" ";
                cout<<i<<" ";
                cnt += 2;
            }
            i++;
        }
        cout<<endl;
    }
    else{
        cout<<1<<" ";
        int cnt = 1;
        int i = 2;
        while(i < 1e6 && cnt < n){
            if(v[i] == 0){
                cout<<i<<" ";
                cout<<i<<" ";
                cnt += 2;
            }
            i++;
        }
        cout<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}