#include<bits/stdc++.h>
using namespace std;


int maximumLength(string s) {
        map<char, int> seen;
        int maxi = 0;
        for(int i=0; i<s.size(); i++){
            seen[s[i]]++;
            if(s[i] == s[i+1]){
                int cnt=2;
                for(int j=i+1; j<s.size()-1; j++){
                    if(s[j] == s[j+1]){
                        cnt++;
                    }else{
                        break;
                    }
                }
                maxi = max(cnt, maxi);
            }
        }
        if(maxi >= 3){
            return maxi-2;
        }
        else{
            int ma = 0;
            for(int i=0; i<s.size(); i++){
                int x = seen[s[i]];
                ma = max(ma, x);
            }
            if(ma >= 3) return 1;
        }
        return -1;
    }
int main(){
    string s;
    cin>>s;
    cout<<maximumLength(s)<<endl;
}