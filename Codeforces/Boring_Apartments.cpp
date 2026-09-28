#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int a=s[0]-'0';
        int sum=0;
        sum=(a-1)*10;
        if(s.size() == 1){
            sum += 1;
        }
        else if(s.size() == 2){
            sum += 3;
        }
        else if(s.size() == 3){
            sum += 6;
        }
        else if(s.size() == 4){
            sum += 10;
        }
        cout<<sum<<endl;
    }
}