#include<bits/stdc++.h>
using namespace std;

bool strchk(string s){
    if(s.size() == 1) return true;
    for(int i=1; i<s.size(); i++){
        if(s[i] == s[i-1]) return false;
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string s,t;
        cin>>s;
        cin>>t;
        bool check1=strchk(s);
        bool check2=strchk(t);
        if(check2 == false && check1 == false ){
            cout<<"No"<<endl;
            continue;
        }
        if(check1){
            cout<<"Yes"<<endl;
            continue;
        }
        int flag = 0;
        for(int i=1; i<s.size(); i++){
            if(s[i] == s[i-1]){
                if(t[0] != s[i-1] && t[m-1] != s[i]){
                    continue;
                }
                else{
                    flag = 1;
                    cout<<"No"<<endl;
                    break;
                }
            }
        }
        if(flag == 0) cout<<"Yes"<<endl;
    }
}