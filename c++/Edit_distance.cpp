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


int editDistance_Mem(string s, string t, int **v){
    if(s.size() == 0 || t.size() == 0){
        if(s.size() == 0 && t.size() == 0){
            return 0;
        }
        else if(s.size() == 0){
            return t.size();
        }
        else{
            return s.size();
        }
    }
    int m = s.size();
    int n = t.size();
    if(v[m][n] != -1){
        return v[m][n];
    }
    int ans;
    if(s[0] == t[0]){
        return editDistance_Mem(s.substr(1), t.substr(1), v);
    }
    else{
        int x = 1 + editDistance_Mem(s.substr(1), t, v);
        //int x2 = 1 + editDistance(s, t.substr(1));
        int y = 1 + editDistance_Mem(s, t.substr(1), v);
        //int y2 = 1 + editDistance(s, t.substr(1));
        int z = 1 + editDistance_Mem(s.substr(1), t.substr(1), v);
        //ans = min(x1, min(x2, min(y1, min(y2, z))));
        ans = min(x, min(y, z));
    }
    v[m][n] = ans;
    return ans;
}

int editDistance(string s, string t){
    if(s.size() == 0 || t.size() == 0){
        if(s.size() == 0 && t.size() == 0){
            return 0;
        }
        else if(s.size() == 0){
            return t.size();
        }
        else{
            return s.size();
        }
    }
    int ans;
    if(s[0] == t[0]){
        return editDistance(s.substr(1), t.substr(1));
    }
    else{
        int x = 1 + editDistance(s.substr(1), t);
        //int x2 = 1 + editDistance(s, t.substr(1));
        int y = 1 + editDistance(s, t.substr(1));
        //int y2 = 1 + editDistance(s, t.substr(1));
        int z = 1 + editDistance(s.substr(1), t.substr(1));
        //ans = min(x1, min(x2, min(y1, min(y2, z))));
        ans = min(x, min(y, z));
    }
    return ans;
}
void solve(){
    string s, t;
    cin >> s >> t;
    cout << editDistance(s, t) << endl;
    int **v = new int*[s.size() + 1];
    for(int i=0; i<=s.size(); i++){
        v[i] = new int[t.size() + 1];
        for(int j=0; j<=t.size(); j++){
            v[i][j] = -1;
        }
    }
    cout << editDistance_Mem(s, t, v) << endl;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}