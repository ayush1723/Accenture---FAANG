// #include<bits/stdc++.h>
// using namespace std;

// //////////////////////////<-Template->//////////////////////////
// #define ll long long int
// #define ull unsigned long long
// #define ld long double
// #define pii pair<int, int>
// #define pll pair<long long, long long>
// #define PI 3.1415926535897932384626433832795
// #define F first
// #define S second
// #define pb push_back
// ///////////////////////<-Data Struture->////////////////////////
// #define vii vector<int>
// #define vll vector<long long>
// #define mp map<int, int>
// #define mpl map<long long, long long>
// #define pq priority_queue<int>
// #define pql priority_queue<long long>
// #define st set<int> 
// #define stl set<long long>
// ///////////////////////<-Daily use->////////////////
// #define MOD 1000000007


// int __gcd(int a, int b) 
// { 
//     // Find Minimum of a and b 
//     int result = min(a, b); 
//     while (result > 0) { 
//         if (a % result == 0 && b % result == 0) { 
//             break; 
//         } 
//         result--; 
//     } 
  
//     // Return gcd of a and b 
//     return result; 
// } 
  
// void solve(){
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for(int i=0; i<n; i++){
//         cin >> v[i];
//     }
//     vector<int> ans(n-1);
//     for(int i=0; i<n-1; i++){
//         ans[i] = __gcd(v[i], v[i+1]);
//     }

// }
// int main(){
//     ll t;
//     cin>>t;
//     while(t--){
//         solve();
//     }
// }

#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
const int N=2e5+5;
int n;
int a[N],b[N],c[N];
 
bool check(int x){
    int t=0;
 
    for(int i=1;i<=n;i++){
        if(i==x) continue;
        c[++t]=a[i];
    }
 
    int last=1;
    for(int i=1;i<n-1;i++){
        int y=__gcd(c[i],c[i+1]);
        if(y<last) return false;
        last=y;
    }
    return true;
}
 
int main(){
    int t;
    cin>>t;
 
    while(t--){
        cin>>n;
 
        for(int i=1;i<=n;i++) cin>>a[i];
        for(int i=1;i<n;i++) b[i]=__gcd(a[i],a[i+1]);
 
        int x=-1;
 
        for(int i=1;i<n-1;i++){
            if(b[i]>b[i+1]){
                x=i;
                break;
            }
        }
 
        if(x==-1)
            cout<<"YES\n";
        else if(check(x)||check(x+1)||check(x+2))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}



