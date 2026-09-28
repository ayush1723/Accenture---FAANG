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
    vll v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    bool flag = true;;
    for(int i=0; i<n-1; i++){
        if(v[i] > v[i+1]){
            flag = false;
            break;
        }
    }
    if(!flag){
        cout<<0<<endl;
    }
    else{
        ll mini = INT_MAX;
        for(int i=0; i<n-1; i++){
            mini = min(mini, abs(v[i]-v[i+1]));
        }
        ll x = (mini/2) + 1;
        cout<<x<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}