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

bool isValid(vector<int> &a, vector<int> &b, vector<int> &v, int n, int m){
    map<int, int> seen;
    for(auto it : v){
        seen[it]++;
    }
    vector<int> q;
    bool flag = false;
    for(int i=0; i<n; i++){
        if(v[m - 1] == b[i]){
            flag = true;
        }
        if(a[i] != b[i]){
            seen[b[i]]--;
        }
    }
    for(auto &it : seen){
        if(it.second < 0){
            flag = false;
        }
    }
    return flag;
}

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        cin >> b[i];
    }
    int m;
    cin >> m;
    vector<int> v(m);
    for(int i=0; i<m ; i++){
        cin >> v[i];
    }
    if(isValid(a, b, v, n, m)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}