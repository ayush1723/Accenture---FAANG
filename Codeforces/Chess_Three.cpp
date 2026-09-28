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
    int a, b , c;
    cin >> a >> b >> c;
    if(a == 0 && b == 0 && c == 0){
        cout << 0 << endl;
    }
    if(a == b && b == c){
        cout << -1 << endl;
        return;
    }
    if(a+b <= c){
        if((c - (a + b)) % 2 != 0){
            cout << -1 << endl;
        }
        else{
            cout << a + b << endl;
        }
    }
    else{
        if(((a+b) - c) % 2 != 0){
            cout << -1 << endl;
        }
        else{
            int x = (a+b) - c;
            cout << c + x/2 << endl;
        }
    }
    
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}