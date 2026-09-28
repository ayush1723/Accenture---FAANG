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
    int n = s.size();
    int ab = 0;
    int ba = 0;
    int sum_a = 0;
    int sum_b = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == 'a'){
            sum_a += 1;
        }
        else{
            sum_b += 1;
        }
    }
    for(int i=0; i<s.size()-1; i++){
        if(s[i] == 'a' && s[i+1] == 'b'){
            ab++;
        }
        else if(s[i] == 'b' && s[i+1] == 'a'){
            ba++;
        }
    }
    if(ab == ba){
        cout << s << endl;
        return;
    }
    else{
        if(ab > ba){
            if(s[0] == 'a' && s[1] == 'a'){
                s[0] = 'b';
                cout << s << endl;
                return;
            }
            else if(s[n-1] == 'b' && s[n-2] == 'b'){
                s[n-1] = 'a';
                cout << s << endl;
                return;
            }
        }
        else if(ba > ab){
            if(s[0] == 'b' && s[1] == 'b'){
                s[0] = 'a';
                cout << s << endl;
                return;
            }
            else if(s[n-1] == 'a' && s[n-2] == 'a'){
                s[n-1] = 'b';
                cout << s << endl;
                return;
            }
        }
        if(ab > ba){
            if(s[0] == 'a' && s[1] == 'b'){
                s[0] = 'b';
                cout << s << endl;
                return;
            }
            else if(s[n-2] == 'a' && s[n-1] == 'b'){
                s[n-1] = 'a';
                cout << s << endl;
                return;
            }
        }
        else if(ba > ab){
            if(s[0] == 'b' && s[1] == 'a'){
                s[0] = 'a';
                cout << s << endl;
                return;
            }
            else if(s[n-1] == 'a' && s[n-2] == 'b'){
                s[n-1] = 'b';
                cout << s << endl;
                return;
            }
        }
        else{
            if(sum_a > sum_b){
                for(int i=0; i<n; i++){
                    if(s[i] == 'b'){
                        cout << 'a';
                    }
                    else{
                        cout << 'b';
                    }
                }
                cout << endl;
            }
            else{
                for(int i=0; i<n; i++){
                    if(s[i] == 'a'){
                        cout << 'b';
                    }
                    else{
                        cout << 'b';
                    }
                }
                cout << endl;
            }
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