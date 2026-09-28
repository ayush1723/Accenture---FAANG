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
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> v(n);
    vector<int> b(m);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    for(int i=0; i<m; i++){
        cin >> b[i];
    }
    int cnt = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(v[i] + b[j] <= k){
                cnt++;
            }
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