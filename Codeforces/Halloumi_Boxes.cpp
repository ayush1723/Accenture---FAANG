#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        vector<int> v;
        for(int i=0; i<n; i++){
            int p;
            cin>>p;
            v.push_back(p);
        }
        if(k == 1){
            int f=0;
            for(int i=0; i<n-1; i++){
                if(v[i]<=v[i+1]){
                    continue;
                }else{
                    f=1;
                    break;
                }
            }
            if(f == 0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}