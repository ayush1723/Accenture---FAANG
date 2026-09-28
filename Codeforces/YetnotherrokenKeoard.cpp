#include<bits/stdc++.h>
using namespace std;

int check1(string s){
    for(int i=s.size()-1; i>=0; i--){
        if(s[i] >= 97 && s[i] <= 122){
            return i;
        }
    }
    return -1;
}
int check2(string s){
    for(int i=s.size()-1; i>=0; i--){
        if(s[i] >= 65 && s[i] <= 90){
            return i;
        }
    }
    return -1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string res;
        for(int i=0; i<s.size(); i++){
            if(s[i] != 'b' && s[i] != 'B'){
                res += s[i];
            }
            else{
                if(s[i] == 'b'){
                    int len = check1(res);
                    if(len>0){
                        res.erase(res.begin()+len);
                    }
                }
                else if(s[i] == 'B'){
                    int len = check2(res);
                    if(len>0){
                        res.erase(res.begin()+len);
                    }
                }
            }
        }
    }
}