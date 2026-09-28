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
    ll n;
    cin >> n;
    if(n == 1){
        cout<<1<<endl;
        return;
    }
    if(n <= 3){
        cout<<2<<endl;
        return;
    }
    int j = 2;
    ll maxi = INT_MIN;
    ll x = 0;
    for(int i=0; i<32; i++){
        x = pow(2, j);
        if(x <= n){
            maxi = max(maxi, x);
            j++;
        }
        else{
            break;
        }
    }
    cout<<maxi<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}