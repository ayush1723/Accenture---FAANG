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
    int res = 0;
    res = (n * (n + 1)) / 2;
    mp mm;
    mm[0]++;
    int x = 0;
    int y = 0;
    for(int i=0; i<n; i++){
        if(s[i] == '0'){
            x = x + 1;
        }
        else{
            y = y + 1;
        }
        res = res + mm[x - y];
        mm[x - y]++;
    }
    cout << res << endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}