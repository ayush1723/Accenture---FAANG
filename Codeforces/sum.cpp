#include<bits/stdc++.h>
using namespace std;
using namespace chrono;

//////////////////////////<-Template->//////////////////////////
#define ll long long int
#define ld long double
#define pii pair<int, int>
#define pll pair<long long, long long>
#define PI 3.1415926535897932384626433832795
#define ff first
#define ss second
#define pb push_back
///////////////////////<-Data Struture->////////////////////////
#define vii vector<int>
#define vll vector<long long>
#define mp map<int, int>
#define mpl map<long long, long long>
#define pq priority_queue<int>
#define pql priority_queue<long long>
#define st set<int> 
#define stll set<long long>
///////////////////////<-Daily use->////////////////
#define MOD 1000000007
#define all(a) a.begin(),a.end()

ll gcd(ll a, ll b){return b==0?a:gcd(b,a%b);}
ll lcm(ll a, ll b){return (a/gcd(a,b))*b;}

int ncr(int n, int r) { ll res = 1; for(int i=0; i<r; i++) { res *= (n-i); res /= (i+1); } return res;}

long long power(long long base, long long exp) {
    long long result = 1;
    base = base % MOD;  // Handle the case where base >= MOD
 
    while (exp > 0) {
        // If exp is odd, multiply base with result
        if (exp % 2 == 1) {
            result = (result * base) % MOD;
        }
        // Square the base and halve the exponent
        base = (base * base) % MOD;
        exp = exp / 2;
    }
 
    return result;
}

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

void CoderAyush17() {
    
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
        CoderAyush17();
    }
}