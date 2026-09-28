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
    string s, t;
    cin >> s >> t;
    map<char, int> mp1;
    map<char, int> mp2;
    for(int i=0; i<s.size(); i++){
        mp1[s[i]]++;
    }
    for(int i=0; i<t.size(); i++){
        mp2[t[i]]++;
    }
    int maxi = -1;
    for(int i=0; i<t.size(); i++){
        int x = mp1[t[i]];
        int y = mp2[t[i]];
        if(y > x){
            cout << "NO" << endl;
            return;
        }
        int l = x - y;
        l++;
        int cnt = 0;
        int j=maxi + 1;
        for( ; j<s.size(); j++){
            if(t[i] == s[j]){
                cnt++;
            }
            if(cnt == l){
                mp1[s[j]]--;
                break;
            }
            mp1[s[j]]--;
        }
        if(cnt != l){
            cout << "NO" << endl;
            return;
        }
        else{
            maxi = max(maxi, j);
        }
        mp2[t[i]]--;
    }
    cout << "YES" << endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}