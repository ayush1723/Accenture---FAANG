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

bool check(int n){
    for(int i=2; i<=sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
void solve(){
    int n;
    cin >> n;
    int ans = 0;
    for(int i=n; i<n+100; i++){
        if(check(i)){
            cout << i << endl;
            break;
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