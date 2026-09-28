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
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool check = true;
    for(char c : s){
        if(c == '0'){
            check = false;
            break;
        }
    }
    if(check){
        cout << "YES" << endl;
        return;
    }
    bool flag = false;
    for(int i=0; i<n; ++i ){
        if(s[i] == '1' && (i == 0 || s[i-1] == '0') && (i == n-1 || s[i+1] == '0')){
            flag = true;
            break;
        }
    }
    if(flag){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}