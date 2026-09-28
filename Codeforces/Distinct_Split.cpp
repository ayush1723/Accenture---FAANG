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
    string s;
    cin >> s;
    map<char, ll> seen1;
    for(ll i=0; i<n; i++){
        seen1[s[i]]++;
    }
    map<char, ll> seen2;
    ll index = -1;
    for(ll i=0; i<n; i++){
        if(seen2[s[i]] > 0){
            if((seen1[s[i]] - seen2[s[i]]) == 1){
                index = i;
                break;
            }
            seen2[s[i]]++;
        }
        else{
            seen2[s[i]]++;
        }
    }
    // cout << seen1[s[0]] << endl;
    // cout << index << endl;
    if(index == -1){
        cout << seen1.size() << endl;
        return;
    }
    map<char, ll> seen3;
    map<char, ll> seen4;
    for(ll i=0; i<index; i++){
        seen3[s[i]]++;
    }
    for(ll i=index; i<n; i++){
        seen4[s[i]]++;
    }
    cout << seen3.size() + seen4.size() << endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}