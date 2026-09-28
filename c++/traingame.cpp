#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s,q;
    cin>>s;
    cin>>q;
    int cnt=0;
    int cnt1=0;
    for(int i=0; i<n; i++){
        if(s[i] == q[i]){
            continue;
        }
        else{
            if(s[i] == 'R' && q[i] != 'P'){
                cnt++;
            }else if(s[i] == 'S' && q[i] == 'P'){
                cnt++;
            }
            else if(s[i] == 'p' && q[i] == 'R'){
                cnt++;
            }
            else{
                cnt1++;
            }
        }
    }
    if(cnt1 > cnt){
        cout<<cnt1-cnt<<endl;
    }
    else{
        cout<<0<<endl;
    }
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
        solve();
    }
	return 0;
}
