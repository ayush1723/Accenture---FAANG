#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int t=s[0]-'0';
    if(t == 9){
        s[0] = t+'0';
    }
    else if(t>4){
        s[0] = (9-t)+'0';
    }
    for(int i=1; i<s.size(); i++){
        int f=s[i]-'0';
        if(f>4){
            s[i] = (9-f)+'0';
        }
    }
    cout<<s<<endl;
}
