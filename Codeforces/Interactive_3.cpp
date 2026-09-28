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

// struct Interactor{
//     vector<int> v;
//     Interactor(){
//         v.resize(10);
//         for(int i = 0; i < 10; i++){
//             int x = getRandomNumber(1, 100);
//             v[i] = x;
//         }
//     }
//     int query(int l, int r){
//         int sum = 0;
//         for(int i = l; i <= r; i++){
//             sum += v[i];
//         }
//         return sum;
//     }
//     void isValidAnswer(vector<int> &b){
//         bool flag = true;
//         for(int i = 0; i<10; i++){
//             if(v[i] != b[i]){
//                 flag = false;
//                 break;
//             }
//         }
//         if(flag){
//             cout << "Passed";
//         }
//         else{
//             cout << "Failed";
//         }
//         cout << endl;
//     }
// };

void solve(){
    int n;
    cin >> n;
    vector<int> v(n+1);

    int sum1to3;
    cout << "? " << 1 << " " << 3 << endl;
    cin >> sum1to3;

    int sum1to2;
    cout << "? " << 1 << " " << 2 << endl;
    cin >> sum1to2;

    int sum2to3;
    cout << "? " << 2 << " " << 3 << endl;
    cin >> sum2to3;

    v[1] = sum1to3 - sum2to3;
    v[2] = sum1to2 - v[1];
    v[3] = sum2to3 - v[2];

    for(int i = 4; i <= n; i++){
        cout << "? " << i - 1 << " " << i << endl;
        int curr;
        cin >> curr;
        v[i] = curr - v[i - 1];
    }

    cout << "! ";
    for(int i = 1; i <= n; i++){
        cout << v[i] << " ";
    }
    cout << endl;
}
int main(){
    solve();
}