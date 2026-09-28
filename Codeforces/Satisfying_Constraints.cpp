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
    int n;
    cin>>n;
    ll p=INT_MIN;
    ll q=INT_MAX;
    stl check;
    for(ll i=0; i<n; i++){
        int d;
        ll f;
        cin>>d>>f;
        if(d == 1){
            p = max(p, f);
        }
        else if(d == 2){
            q = min(q, f);
        }
        else{
            check.insert(f);
        }
    }
    if(p > q){
        cout<<0<<endl;
    }
    else{
        ll cnt = 0;
        ll i = p;
        ll j = q;
        while(i <= j){
            if(check.find(i)){
                i++;
                continue;
            }
            else{
                cnt++;
                i++;
            }
        }
        cout<<cnt<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}