#include<bits/stdc++.h>
#define int long long
#define fr first
#define sc second
#define pow powl
using namespace std;
const int MAX = 200010;
const int MOD = 1e9+7;
const int MIX = 1e15+9;
void solve(){
    int n,m;
    cin>>n>>m;
    char a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int b[2][4];
    for(int i=0;i<4;i++){
        b[0][i]=0,b[1][i]=0;
    }
    for(int i=0;i<n;i++){
        if(a[i][0]=='B'){
            b[0][0]++;
        }
        else{
            b[1][0]++;
        }
        if(a[i][m-1]=='B'){
            b[0][1]++;
        }
        else{
            b[1][1]++;
        }
    }
    for(int i=0;i<m;i++){
        if(a[0][i]=='B'){
            b[0][2]++;
        }
        else{
            b[1][2]++;
        }
        if(a[n-1][i]=='B'){
            b[0][3]++;
        }
        else{
            b[1][3]++;
        }
    }
    if((b[0][0]!=0 && b[0][1]!=0 && b[0][2]!=0 && b[0][3]!=0) || (b[1][0]!=0 && b[1][1]!=0 && b[1][2]!=0 && b[1][3]!=0)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t --){
        solve();
        cout<<"\n";
    }
}