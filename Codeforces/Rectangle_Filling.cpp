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
    char v[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> v[i][j];
        }
    }

    if(n == 1 && m == 1){
        cout << "YES" << endl;
        return;
    }
    else if(n == 1 && m != 1){
        for(int i=0; i<m-1; i++){
            if(v[0][i] != v[0][i+1]){
                cout << "NO" << endl;
                return;
            }
        }
    }
    else if(m == 1 && n != 1){
        for(int i=0; i<n-1; i++){
            if(v[i][0] != v[i+1][0]){
                cout << "NO" << endl;
                return;
            }
        }
    }

    if(v[0][0] == v[n-1][m-1] || v[0][m-1] == v[n-1][0]){
        cout << "YES" << endl;
        return;
    }

    char c = v[n-1][0];
    bool flag1 = false;
    bool flag2 = false;
    for(int i=0; i<m; i++){
        if(v[0][i] == c){
            flag1 = true;
            break;
        }
    }
    for(int i=0; i<n; i++){
        if(v[i][m-1] == c){
            flag2 = true;
            break;
        }
    }
    if(flag1 && flag2){
        cout << "YES" << endl;
        return;
    }

    c = v[n-1][m-1];
    flag1 = false;
    flag2 = false;
    for(int i=0; i<m; i++){
        if(v[0][i] == c){
            flag1 = true;
            break;
        }
    }
    for(int i=0; i<n; i++){
        if(v[i][0] == c){
            flag2 = true;
            break;
        }
    }
    if(flag1 && flag2){
        cout << "YES" << endl;
        return;
    }

    c = v[0][0];
    flag1 = false;
    flag2 = false;
    for(int i=0; i<m; i++){
        if(v[n-1][i] == c){
            flag1 = true;
            break;
        }
    }
    for(int i=0; i<n; i++){
        if(v[i][m-1] == c){
            flag2 = true;
            break;
        }
    }
    if(flag1 && flag2){
        cout << "YES" << endl;
        return;
    }

    c = v[0][m-1];
    flag1 = false;
    flag2 = false;
    for(int i=0; i<m; i++){
        if(v[0][i] == c){
            flag1 = true;
            break;
        }
    }
    for(int i=0; i<n; i++){
        if(v[n-1][i] == c){
            flag2 = true;
            break;
        }
    }
    if(flag1 && flag2){
        cout << "YES" << endl;
        return;
    }

    cout << "NO" << endl;
    return;
    
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         cout << v[i];
    //     }
    //     cout << endl;
    // }
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}