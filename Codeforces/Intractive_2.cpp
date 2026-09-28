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

//<------------------------------------------------------------------------------------------------------------------------------------------------------------>

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

struct Instructor{
    int arr[100];
    Instructor(){
        //arr.resize(100);
        for(int i = 0; i < 51; i++){
            arr[i] = 10;
        }
        for(int i = 51; i < 100; i++){
            arr[i] = getRandomNumber(1, 10);
        }
    }

    bool query(int index){
        return arr[index] == 10;
    }

    void isValidOutput(int index){
        if(arr[index] == 10){
            cout << "Passed";
        }
        else{
            cout << "failed";
        }
        cout << endl;
    }
    
};

void solve(){
    for(int i = 0; i < 10; i++){
        int queries = 0;
        int ans = -1;
        Instructor it = Instructor();
        while(true){
            int x = getRandomNumber(0, 99);
            queries++;
            cout << "? " << x << endl;
            if(it.query(x)){
                ans = x;
                break;
            }
        }
        it.isValidOutput(ans);
        cout << "queries : " << queries << endl;
    }
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}