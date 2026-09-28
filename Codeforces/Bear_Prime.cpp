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
#define e endl
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
    int n, k;
    cin >> n >> k;
    string s, t;
    cin >> s >> t;

    if(s == t && (s == "01" || s == "10") && k % 2 == 1){
        cout << "NO" << e;
        return;
    }

    int count = 0, ans = 0, focus = 0;
    for(int i = 0; i < n; i++){
        if(s[i] != t[i]){
            count++;
            ans += s[i]-'0';
        }
        else{
            focus++;
        }
    }

    if(count == 2 && s.size()== 2 && k%2==0){
        cout << "NO" << e;
        return;
    }
     
    if(count == ans * 2 && ans <= k){
        cout << "YES" << e;
    }
    else{
        cout<<"NO"<<e;
    }
} 


int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}