#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<char> seen;
    for(char i='A'; i<='Z'; i++){
        seen.push_back(i);
    }
    for(int i=0; i<26; i++){
        cout<<seen[i]<<endl;
    }       
}