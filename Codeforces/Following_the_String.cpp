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

char check(unordered_map<char, int> & seen, int a){
    for(auto i : seen){
        if(seen[i] == a){
            return i;
        }
    }
}
void solve(){
    ll n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    string s = "";
    char c;
    int x = 97;
    int cnt = 0;
    unordered_map<char, int> seen;
    for(int i=0; i<n; i++){
        if(v[i] == 0){
            c = x;
            s = s + c;
            seen[c]++;
            cnt++;
        }
        else if(v[i] == cnt){
            s = s + 'a';
            cnt++;
            seen[a]++;
        }
        else{
            char ch = check(seen, v[i]);
            s = s + ch;
            cnt++;
            seen[ch]++;
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