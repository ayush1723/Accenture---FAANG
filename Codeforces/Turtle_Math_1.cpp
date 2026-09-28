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
    vector<int> v(n);
    int sum = 0;
    map<int, int> seen;
    for(int i=0; i<n; i++){
        cin >> v[i];
        sum += v[i];
        seen[v[i]]++;
    }
    sort(v.begin(), v.end());
    if(sum % 3 == 0){
        cout<<0<<endl;
        return;
    }
    else if(sum % 3 == 2){
        cout<<1<<endl;
        return;
    }
    else{
        for(int i=0; i<n; i++){
            if((sum - v[i]) % 3 == 0){
                cout<<1<<endl;
                return;
            }
        }
    }
    cout<<2<<endl;
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}