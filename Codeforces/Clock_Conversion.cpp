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
    int num = 0;
    num += s[1] - '0';
    num += (s[0] - '0') * 10;
    if(num < 12){
        if(num == 0){
            cout << 12 << ":" << s[3] << s[4] << " " << "AM" << endl;;
        }
        else{
            cout << s << " " << "AM" << endl;;
        }
    }
    else{
        if(num == 12){
            cout << num  << ":" << s[3] << s[4] << " " << "PM" << endl;
        }
        else if(num - 12 < 10){
            cout << "0" << num - 12 << ":" << s[3] << s[4] << " " << "PM" << endl;
        }
        else{
            cout << num - 12 << ":" << s[3] << s[4] << " " << "PM" << endl;
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