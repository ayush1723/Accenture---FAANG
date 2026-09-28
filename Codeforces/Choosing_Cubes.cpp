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
    int n, f, k;
    cin >> n >> f >> k;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    int ele = v[f - 1];
    int large = 0;
    int same = 0;
    for(int i=0; i<n; i++){
        if(v[i] > ele){
            large++;
        }
        else if(v[i] == ele){
            same++;
        }
    }
    if(large + 1 > k){
        cout << "NO" << endl;
    }
    else if(large + same <= k){
        cout << "YES" << endl;
    }
    else{
        cout << "MAYBE" << endl;
    }
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}