#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> v;
        for(int i=0; i<n; i++){
            int p;
            cin>>p;
            v.push_back(p);
        }
        if(n == 1){
            cout<<max(abs(0-v[0]), 2*abs(v[0]-x));
        }
        else{
        int maxi=INT_MIN;
        for(int i=0; i<n-1; i++){
            maxi = max(maxi, abs(v[i]-v[i+1]));
        }
        maxi = max(maxi, 2*abs(x-v[n-1]));
        cout<<maxi<<endl;
        }
    }
}