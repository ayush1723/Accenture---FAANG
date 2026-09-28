#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        char v[100][100];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>v[i][j];
            }
        }
        int cnt=0;
        for(int i=0; i<n-1; i++){
            if(v[i][m-1] == 'R'){
                cnt++;
            }
        }
        for(int i=0; i<m-1; i++){
            if(v[n-1][i] == 'D'){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}