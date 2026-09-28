#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n,k;
    string s;
    cin>>n>>k>>s;
    map<char,int> m;
    for(char c: s)
        m[c]++;
    int odd=0;
    for(auto it:m)
    {
        if(it.second%2)
            odd++;
    }
    if(odd>k+1)
        cout<<"NO"<<endl;
   else
        cout<<"YES"<<endl;
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}