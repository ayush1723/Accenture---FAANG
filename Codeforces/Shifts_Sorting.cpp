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
    string s;
    cin >> s;
    ll ans = 0;
    ll cnt = 0;
    for(ll i=0; i<s.size(); i++){
        if(s[i] == '0' && cnt > 0){
            ll j = i;
            ll count = 0;
            while(s[j] == '0' && j < s.size()){
                count++;
                j++;
                i = j;
                i--;
            }
            ans += count * (cnt + 1);
        }
        else if(s[i] == '1'){
            cnt++;
        }
    }
    cout << ans << endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}