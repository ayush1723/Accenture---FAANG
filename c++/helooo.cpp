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
ll INF = 2e18;

//////////////////////<-Maths->//////////////////

bool isPrime(int n) {
    if (n < 2) return false;
    if (n % 2 == 0) return n == 2;
    if (n % 3 == 0) return n == 3;
    for (int i = 5; i * 1LL * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

//////////////////////////////////////////////////////

// 5
// 1 1 1
// 3 2 6
// 4 8 12
// 9 10 12
// 12730 3088 28130

int f(vector<int> v, int i, int j, int n) {
    if(i == n) {
        return 0;
    }

    int x = 0;

    if(j == -1 || v[i] > v[j]) {
        x = 1 + f(v, i + 1, i, n);
    }
    int y = f(v, i + 1, j, n);

    return max(x, y);
}

void iamAyush() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cout << f(v, 0, - 1, n) << "\n";
}

int main() {
    int t;
    cin>>t;
    while(t--){
        iamAyush();
    }
}