#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        int flag=0;
        for(int i=1; i<n; i++){
            if(v[i-1] > v[i]){
                if(i != 1 && i != 2 && i != 4 && i != 8 && i != 16){
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}