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
    cin>>n;
    vll v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    bool flag = true;
    for(int i=0; i<n-1; i++){
        if(v[i] != v[i+1]){
            flag = false;
            break;
        }
    }
    if(flag){
        cout<<-1<<endl;
        return;
    }
    int i=0;
    while(i < n){
        if(v[i] != v[i+1]){
            break;
        }
        i++;
    }
    cout<<i+1<<" "<<n-(i+1)<<endl;;
    for(int j = 0; j <= i; j++){
        cout<<v[j]<<" ";
    }
    cout<<endl;
    for(int j = i+1; j < n; j++){
        cout<<v[j]<<" ";
    }
    cout<<endl;
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}