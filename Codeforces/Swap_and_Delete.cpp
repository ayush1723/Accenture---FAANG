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
    cin>>s;
    int cnt1=0;
    int cnt0=0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '0') cnt0++;
        else cnt1++;
    }
    if(cnt1 == cnt0){
        cout<<0<<endl;
    }
    else{
        int i = 0;
        while(cnt1 != 0 && cnt0 != 0){
            if(s[i] == '1'){
                cnt0--;
                i++;
            }
            else{
                cnt1--;
                i++;
            }
        }
        while(cnt1 != 0 && s[i] == '0'){
            cnt1--;
            i++;
        }
        while(cnt0 != 0 && s[i] == '1'){
            cnt0--;
            i++;
        }
        cout<<abs(cnt1-cnt0)<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}