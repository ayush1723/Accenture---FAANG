#include<bits/stdc++.h>

using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
    int n,k;
    cin>>n>>k;
    vector<int> v;
    for(int i=0; i<n; i++){
        int w;
        cin>>w;
        v.push_back(w);
    }
    int p=0 ;
    int ans=0;
    int g=0;
    int h=0;
    while(k--){
        if(v[p]%2==0) g++;
        else h++;
        p++;
    }
    if(h>0){
        ans++;
    }
    for(int i=0;p<n;i++){
        if(v[i]%2==0){
            g--;
        }
        else{
            h--;
        }
        if(v[p]%2==0){
            g++;
        }
        else{
            h++;
        }
        p++;
        if(h>0){
            ans++;
        }
    }
    cout<<ans<<endl;
}
}