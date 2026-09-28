#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    string s1;
    string s2;
    string s3;
    string s4;
    string s5;
    cin>>s;
    cin>>s1;
    cin>>s2;
    cin>>s3;
    cin>>s4;
    cin>>s5;
    if(s[0] == s1[0] || s[0] == s2[0] || s[0] == s3[0] || s[0] == s4[0] || s[0] == s5[0]){
        cout<<"YES"<<endl;
    }
    else if(s[1] == s1[1] || s[1] == s2[1] || s[1] == s3[1] || s[1] == s4[1] || s[1] == s5[1]){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}