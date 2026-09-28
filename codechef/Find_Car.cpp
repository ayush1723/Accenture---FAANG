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
    ll n, k, q;
    cin >> n >> k >> q;
    vector<ll> a(k);
    vector<ll> b(k);
    vector<ll> v(q);
    vector<ll> ans;
    for(ll i=0; i<k; i++){
        cin >> a[i] ;
        //a[i] = a[i] / 100000;
    }
    for(ll i=0; i<k; i++){
        cin >> b[i] ;
        //b[i] = b[i] / 100000;
    }
    for(ll i=0; i<q; i++){
        cin >> v[i];
        //v[i] = v[i] / 100000;
    }
    vector<pair<ll, double> > p;
    for(ll i=0; i<k; i++){
        if(i == 0){
            double m = double(a[i]) / b[i];
            pair<ll, double> pp;
            pp.first = a[i];
            pp.second = m;
            p.push_back(pp);
        }
        else{
            double m = double(a[i] - a[i-1]) / (b[i] - b[i-1]);
            pair<ll, double> pp;
            pp.first = a[i];
            pp.second = m;
            p.push_back(pp);    
        }
    }
    // for(ll i=0; i<p.size(); i++){
    //     cout << p[i].first << " " << p[i].second << endl;
    // }

    for(ll i=0; i<q; i++){
        ll sum = 0;
        ll j = 0;
        ll anu = 0;
        while(sum < v[i]){
            if(v[i] >= p[j].first){
                sum = p[j].first;
                anu += p[j].first / p[j].second;
            }
            else{
                anu += (v[i] - sum) / p[j].second; 
                //cout << anu << endl ;
                sum = p[j].first;
            }
            j++;
        }
        ans.push_back(anu);
    }
    for(ll i=0; i<q; i++){
        cout << ans[i] << " ";
    }
    cout << endl;

}
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}