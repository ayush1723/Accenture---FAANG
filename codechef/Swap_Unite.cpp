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
    map<char, int> seen;
    for(ll i=0; i<s.size(); i++){
        seen[s[i]]++;
    }
    ll maxi = INT_MAX;
    for(auto i : seen){
        ll cnt = 0;
        for(ll j=0; j<s.size()-i.second; j++){
            for(ll k=j; k<=s.size()-i.second; k++){
                if(i.first != s[k]){
                    cnt++;
                }
            }
        }
        maxi = min(cnt, maxi);
    }
    cout << maxi << endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}