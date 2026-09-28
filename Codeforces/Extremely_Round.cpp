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

// int length(ll n){
//     int cnt = 0;
//     while(n != 0){
//         cnt++;
//         n = n / 10;
//     }
//     return cnt;
// }

void solve(){
    ll n;
    cin>>n;
    int cnt = 0;
    if(n < 10){
        cout<<n<<endl;
    }
    else{
        // int len = length(n);
        vector<ll> v;
        ll temp = n;
        int i = 1;
        while(temp != 0){
            v.push_back(temp%10);
            temp = temp / pow(10, i);
            temp = temp * pow(10, i);
            i++;
        }

    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}