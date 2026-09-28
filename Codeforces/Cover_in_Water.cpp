#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt = 0;
    bool flag = false;
    for(int i=0; i<n; i++){
        if(s[i] == '.'){
            int j = i;f
            int x=0;
            while(s[j] == '.'){
                x++;
                j++;
            }
            cnt = max(cnt, x);
        }
        if(cnt >= 3){
            flag = true;
            break;
        }
    }
    if(flag){
        cout<<2<<endl;
    }
    else{
        int q = 0;
        for(int i=0; i<n; i++){
            if(s[i] == '.') q++;
        }
        cout<<q<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}