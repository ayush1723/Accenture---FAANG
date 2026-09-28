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
    int flag = 1;
    int i = 0;
    int j = s.size()-1;
    // int l = i;
    // int m = j;
    // int fl = 1;
    // while(l <= m){
    //     if(s[i] != s[j]){
    //         fl = 0;
    //         break;
    //     }
    //     l++;
    //     m--;
    // }
    // if(fl == 1){
    //     cout << s << endl;
    //     return;
    // }
    while(i < j){
        if(s[i] == s[j]){
            i++;
            j--;
            continue;
        }
        else if(s[i] < s[j]){
            break;
        }
        else if(s[i] > s[j]){
            flag = 0;
            break;
        }
        i++;
        j--;
    }
    if(flag == 1){
        cout << s << endl;
    }
    else{
        string s1 = s;
        reverse(s.begin(), s.end());
        cout << s + s1 << endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}




ll maxi = INT_MIN;
        for(ll i=0; i<n; i++){
            if(c == s[i]){
                ll local = 0;
                for(int j=i; j<n-1; j++){
                    if(s[j] == s[j+1]){
                        local++;
                    }
                }
                maxi = max(maxi, local);
            }
        }