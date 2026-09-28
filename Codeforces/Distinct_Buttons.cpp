#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    vector<int> b(n);
    for(int i=0; i<n; i++){
        cin>>v[i]>>b[i];
    }
    /*
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    for(int i=0; i<n; i++){
        cout<<b[i]<<" ";
    }
    */
    sort(v.begin(), v.end());
    sort(b.begin(), b.end());
    int flag_1 = 0;
    int flag_2 = 0;
    if((v[0] >= 0) || (v[n-1] <=0)){
        flag_1 = 1;
    }
    else if((b[0] >= 0) || (b[n-1] <= 0)){
        flag_2 = 1;
    }
    if(flag_1 || flag_2 ){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}