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


void fibo_2(int n, vector<int> &v){
    v[0] = 0;
    v[1] = 1;
    for(int i=2; i<=n; i++){
        v[i] = v[i-1] + v[i-2];
    }
    return;
}

int fibo(int n, vector<int> &v){
    if(n == 0 || n == 1){
        return 1;
    }
    if(v[n] != -1){
        return v[n];
    }
    int x = fibo(n-1, v);
    int y = fibo(n-2, v);
    v[n] = x + y;
    return x + y;
}

int countMinStepsToOne(int n, vector<int> &v)
{
	//Write your code here
	if(n == 1){
		return 0;
	}
    if(v[n] != -1){
        return v[n];
    }
	int x = 1e6, y = 1e6, z = 1e6;
	x = countMinStepsToOne(n - 1, v);
	if(n % 2 == 0){
		y = countMinStepsToOne(n / 2, v);
	}
	if(n % 3 == 0){
		z = countMinStepsToOne(n / 3, v);
	}
    int l = min(x, min(y, z));
    v[n] = 1 + l;
	return 1 + min(x, min(y, z));
}

void solve(){
    int n;
    cin >> n;
    vector<int> v(n+1, -1);
    // cout << fibo(n, v) << endl;
    // fibo_2(n, v);
    // cout << v[n] << endl;
    cout << countMinStepsToOne(n, v) << endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}