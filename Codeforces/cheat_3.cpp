#include<bits/stdc++.h>
using namespace std;

int main(){{
    int t;
    cin>>t;
    while(t--){
    int n,x;
    cin>>n>>x;
    vector<int> v;
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        v.push_back(p);
    }
    sort(v.begin(),v.end());
    int ans=max(v[0],(x-v.back())*2);
    v.push_back(x);
    for(int i=1;i<=n;i++)ans=max(ans,v[i]-v[i-1]);
    cout<<ans<<"\n";
    }
}}