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
    int cnt = 1;
    int tg = 0;
    for(int i=1; i<s.size(); i++){
        if(s[i] == s[i-1]){
            continue;
        }
        else{
            cnt++;
        }
        if(s[i-1] == '0' && s[i] == '1'){
            tg = 1;
        }
    }
    cout << cnt - tg << endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}