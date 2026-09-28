#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    bool check = true;
    for(int i=0; i<n-1; i++){
        if(v[i] <= v[i+1]){
            continue;
        }
        else{
            check = false;
            break;
        }
    }
    if(check){
        cout<<"YES"<<endl;
        return;
    }
    if(k == 1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}