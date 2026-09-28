#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n;
    string s;
    cin>>n;
    cin>>s;
    ll cnt=0;
    string res="";
    for(ll i=0; i<n; i++){
        res += 'P';
        if(s[i] == 'R'){
            cnt++;
        }
    }
    if(cnt > (n/2)){
        cout<<res<<endl;
    }
    else{
        for(ll i=n-1; i>=0; i--){
            if(s[i] == 'R') continue;
            else{
                if(s[i] == 'P'){
                    res[i] = 'S';
                    cnt++;
                }
                else{
                    res[i] = 'R';
                    cnt++;
                }
            }
            if(cnt > (n/2)){
                break;
            }
        }
        cout<<res<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}