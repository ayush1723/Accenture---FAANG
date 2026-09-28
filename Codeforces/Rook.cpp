#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int i = s[1] - '0';
        for(int j=1; j<=8; j++){
            if( i != j){
                cout<<s[0]<<j<<endl;
            }
        }
        for(char j='a'; j<='h'; j++){
            if(j != s[0]){
                cout<<j<<i<<endl;
            }
        }
    }
}