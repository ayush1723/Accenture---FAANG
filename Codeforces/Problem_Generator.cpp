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
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    map<char, int> seen;
    for(int i=0; i<n; i++){
        seen[s[i]]++;
    }
    int cnt = 0;
    char c = 65;
    for(int i = 1; i <= 7; i++){
        if(seen[c] < m){
            cnt += abs(seen[c] - m);
        }
        c++;
    }
    cout << cnt << endl;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}