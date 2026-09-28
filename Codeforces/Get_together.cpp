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


bool checker(double t, vector<pair<double, double> >& people) {

    pair<double, double> curr = {-1e18, 1e18};

    for(auto i: people) {

        double x = i.first;

        double speed = i.second;

        pair<double, double> range = {x - speed * t, x + speed * t};

        curr = {max(curr.first, range.first), min(curr.second, range.second)}; 
        if(curr.first > curr.second)
        return false;
    }
    return true;
}


// bool checker(double t, vector<pair<double, double> >& v){
//     pair<double, double> p = {-1e18, 1e18};
//     for(auto i : v){
//         double x = i.first;
//         double speed = i.second;
//         pair<double, double> range = {x - speed * t, x + speed * t};
//         p = {max(p.first, range.first), min(p.second, range.second)};
//         if(p.first > p.second){
//             return false;
//         }
//     }
//     return true;
// }
void solve(){
    int n;
    cin >> n;
    vector<pair<double, double> > v(n);
    for(int i=0; i<n; i++){
        cin >> v[i].first >> v[i].second;
    }
    double left = 0, right = 1e9;
    for(int i=0; i<60; i++){
        double mid = (left + right) / 2;
        if(checker(mid, v)){
            right = mid;
        }
        else{
            left = mid;
        }
    }
    cout << setprecision(7) << fixed << right << endl;
}
int main(){
    solve();
}