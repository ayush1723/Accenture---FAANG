#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        vector<pair<int, char>> v;
        vector<pair<int, char>> c;
        for(int i=0; i<s.size(); i++){
            if(s[i] >='a' && s[i] <= 'z'){
                pair<int, char> p;
                p.first = i+1;
                p.second = s[i];
                v.push_back(p);
            }
            else{
                pair<int, char> p;
                p.first = i+1;
                p.second = s[i];
                c.push_back(p);
            }
        }
        for(int i=0; i<v.size(); i++){
            if(v[i].second == 'b'){
                v[i].second = " ";
                for(int j=i-1; j>=0; j--){
                    if(v[j].second >= 'a'){
                        v[j].second = " ";
                        break;
                    }
                }
            }
            else{
                continue;
            }
        }
        for(int i=0; i<c.size(); i++){
            if(c[i].second == 'B'){
                c[i].second = " ";
                for(int j=i-1; j>=0; j--){
                    if(c[j].second <= 'Z'){
                        c[j].second = " ";
                        break;
                    }
                }
            }
            else{
                continue;
            }
        }
        int i=0;
        int j=0;
        while(i<v.size() && j<c.size()){
            if(v[i].first < c[i].first){
                
            }
        }
    }
}