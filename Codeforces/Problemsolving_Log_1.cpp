#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    string s;
    cin>>n;
    cin>>s;
    int cnt = 0;
    int x=1;
    for(char ch='A'; ch<='Z'; ch++){
        cnt += (count(s.begin(), s.end(), ch) >= x);
        x++;
    }
    cout<<cnt<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}