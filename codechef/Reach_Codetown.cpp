#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    if(n == 1 || n == 2){
        cout<<0<<endl;
        return;
    }
    int cnt = 0;
    for(int i=0; i<n-1; i++){
        if(v[i] < v[i+1]) cnt++;
    }
    if(cnt == 0){
        cout<<cnt<<endl;
    }
    else{
        cout<<cnt-1<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}