#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n, k, x;
    cin>>n>>k>>x;
    ll u_b = ((n)*(n+1))/2;
    ll l_b = ((k)*(k+1))/2;
    ll lo = u_b - ((n-k)*(n-k+1))/2;
    if(x >= l_b && x <= lo){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}