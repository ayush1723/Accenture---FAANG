#include<bits/stdc++.h>
using namespace std;
using namespace chrono;

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

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
ll getRandomNumber(ll l, ll r) {return uniform_int_distribution<ll>(l, r)(rng);}

//<------------------------------------------------------------------------------------------------------------------------------------------------------------>//

void debugll(vector<ll> &v){
    for(ll i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

void debug(vector<int> &v){
    for(ll i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

void solve(){
    int n, p;
    cin >> n >> p;
    vector<int> v(n);
    vector<int> b(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    if(n == 1){
        cout << p << endl;
        return;
    }
    priority_queue <pair<int, int>, vector<pair<int, int> >, greater<pair<int, int>> > pqq;
    for(int i = 0; i < n; i++){
        pair<int, int> e;
        e.first = b[i];
        e.second = v[i];
        pqq.push(e);
    }
    int sum = p;
    int cnt = 1;
    while(pqq.size() > 0 && cnt < n){
        pair<int, int> e = pqq.top();
        if(e.first >= p){
            break;
        }
        else{
            cnt += e.second;
            if(cnt + e.first > n){
                sum += (n - cnt) * e.first;
            }
            sum += e.second * e.first;
            pqq.pop();
        }
    }
    if(pqq.size() != 0){
        sum += p * (n - cnt);
    }
    cout << sum << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}