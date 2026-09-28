#include<bits/stdc++.h>
using namespace std;
using namespace chrono;

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


//<------------------------------------------------------------------------------------------------------------------------------------------------------------>//



void solve(){
    int n, k;
    cin >> n >> k;
    vector<vector<int> > v;
    for(int i = 0; i < n; i++){
        vector<int> d;
        for(int j = 0; j < n; j++){
            int p;
            cin >> p;
            d.push_back(p);
        }
        v.push_back(d);
    }

    for(int i = 0; i < n / k; i+=k){
       
        for(int j = 0; j < n / k; j+=k){
           
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}