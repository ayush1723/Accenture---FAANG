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
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    vector<int> b;
    int ans = v[0];
    for(int i=1; i<n; i++){
        ans = max(ans, v[i]);
        b.push_back(ans);
        int x = max(v[i], v[i-1]);
        b.push_back(x);
    }
    int mini = INT_MAX;
    for(int i=0; i<b.size(); i++){
        mini = min(mini, b[i]);
    }
    cout << mini - 1 << endl;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}