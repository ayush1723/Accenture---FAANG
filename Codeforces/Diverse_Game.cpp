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
    vector<vector<int> > v;
    for(int i=0; i<n; i++){
        vector<int> p;
        for(int j = 0; j<m; j++){
            int x;
            cin >> x;
            p.push_back(x);
        }
        v.push_back(p);
    }
    if(n == 1 && m == 1){
        cout << -1 << endl;
        return;
    }
    else if(n == 1 || m == 1){
        if(n == 1){
            for(int i=1; i<m; i++){
                cout << v[0][i] << " ";
            }
            cout << v[0][0] << endl;
        }
        else{
            for(int i=1; i<n; i++){
                cout << v[i][0] << " ";
            }
            cout << v[0][0] << endl;
        }
        return;
    }
    vector<int> q;
    for(int i=0; i<n; i++){
        q.push_back(v[i][0]);
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(j == 0){
                continue;
            }
            else{
                v[i][j-1] = v[i][j];
            }
        }
        v[i][m-1] = q[i];
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << v[i][j]  << " ";
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