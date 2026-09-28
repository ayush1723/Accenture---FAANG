#include<bits/stdc++.h>
using namespace std;

bool check(string x, string s){
    int n = x.size();
    int m = s.size();
    for(int i=0; i<=(n-m); i++){
        int j=0;
        for( ; j<m; j++){
            if(x[i+j] != s[j]){
                break;
            }
        }
        if(j == m){
            return true;
        }
    }
    return false;
}
void solve(){
    int n,m;
    cin>>n>>m;
    string x, s;
    cin>>x;
    cin>>s;
    int len = n;
    int cnt = 0;
    while(len < m){
        len *= 2;
        cnt++;
    }
    for(int i=0; i<cnt; i++){
        x += x;
    }
    if(check(x, s)){
        cout<<cnt<<endl;
    }
    else{
        cnt++;
        x += x;
        if(check(x, s)){
            cout<<cnt<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}