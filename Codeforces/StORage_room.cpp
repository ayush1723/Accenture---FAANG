#include<bits/stdc++.h>
using namesspace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<int>int> v;
        for(int i=0; i<n; i++){
            vector<int> a;
            for(int j=0; j<n; j++){
                int p;
                cin>>p;
                a.push_back(p);
            }
            v.push_back(a);
        }
        vector<int> re;
        for(int i=0; i<n; i++){
            int p=0;
            int flag=1;
            for(int j=0; j<n-1; j++){
                if(i != j && flag == 1){
                    flag=0;
                    p=v[i][j];
                }
                else if(i = j){
                    continue;
                }
                else{
                    p = p & v[i][j];
                }
            }
            re.push_back(p);
        }
        int flag = 1;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if()
            }
        }
    }
}