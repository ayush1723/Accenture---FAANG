#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    map<int, int> seen;
    vector<int> v(2);
    int p=0;
    for(int i=0; i<n; i++){
        cin>>p;
        seen[p]++;
    }
    if(seen.size() > 2){
        cout<<"NO"<<endl;
        return;
    }
    if(seen.size()==1){
        cout<<"YES"<<endl;
        return;
    }
    int i=0;
    for(auto it : seen){
        v[i++]=it.second;
    }
    if(abs(v[0]-v[1]) > 1){
        cout<<"No"<<endl;
    }else{
        cout<<"Yes"<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}