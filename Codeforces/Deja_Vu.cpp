#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<long long> a;
        vector<int> x;
        for(int i=0; i<n; i++){
            int y;
            cin>>y;
            a.push_back(y);
        }
        for(int i=0; i<q; i++){
            int y;
            cin>>y;
            x.push_back(y);
        }
        for(int i=0; i<q; i++){
            long long p = pow(2,x[i]);
            for(int j=0; j<n; j++){
                if(a[j] % p == 0){
                    a[j] = a[j] + pow(2, x[i]-1);
                }
            }
        }
        for(int i=0; i<n; i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}