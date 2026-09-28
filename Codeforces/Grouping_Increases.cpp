#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    // if(n == 1 || n == 2){
    //     cout<<0<<endl;
    //     return;
    // }
    // ll cnt = 0;
    // for(ll i=0; i<n-1; i++){
    //     if(v[i] < v[i+1]) cnt++;
    // }
    // if(cnt == 0)
    //     cout<<cnt<<endl;
    // else
    //     cout<<cnt-1<<endl;
    // vector<int> s, t;
    // int cnt = 0;
    // int i = 0;
    // while(i<v.size()){
    //     if(s.size() == 0) s.push_back(v[i]);
    //     else if(t.size() == 0) t.push_back(v[i]);
    //     else if(s.back() >= v[i] && t.back() >= v[i]){
    //         if(s.back() <= t.back()) s.push_back(v[i]);
    //         else t.push_back(v[i]);
    //     }
    //     else if(s.back() >= v[i]) s.push_back(v[i]);
    //     else if(t.back() >= v[i]) t.push_back(v[i]);
    //     else{
    //         cnt++;
    //         if(s.back() <= t.back()) s.push_back(v[i]);
    //         else t.push_back(v[i]);
    //     }
    //     i++;
    // }
    // cout<<cnt<<endl;
    int ans = 0;
    int x = n+1, y=n+1;
    for(int i=0; i<n; i++){
        if(v[i] > max(x, y)){
            ans++;
            if(x <= y) x = v[i];
            else y = v[i];
        } else if(x <= y && x >= v[i]){
            x = v[i];
        } else if(y <= x && y >= v[i]){
            y = v[i];
        } else if(x >= v[i]){
            x = v[i];
        } else if(y >= v[i]){
            y = v[i];
        }
        else{
            assert(false);
        }
    }
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}