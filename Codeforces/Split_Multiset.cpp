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
//#define pq priority_queue<int>
#define pql priority_queue<long long>
#define st set<int> 
#define stl set<long long>
///////////////////////<-Daily use->////////////////
#define MOD 1000000007


void solve(){
    long double n;
    cin >> n;
    long double ans = 0;
    long double h = 1e18, error = 1e-8, l = error;
    for (int i = 0; i < 120; i++){
        long double mid = (l + h) / 2;
        if(mid * mid >= n){
            ans = mid;
            h = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    cout << ans << endl;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}