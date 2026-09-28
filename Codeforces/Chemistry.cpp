#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
//     int n,k;
//     string s;
//     cin>>n>>k>>s;
//     map<char,int> m;
//     for(char c: s)
//         m[c]++;
//     int odd=0;
//     for(auto it:m)
//     {
//         if(it.second%2)
//             odd++;
//     }
//     if(n-k==0 || odd>k+1)
//         cout<<"NO"<<endl;
//    else
//         cout<<"YES"<<endl;
int n, k;
cin >> n >> k;
string s;
cin >> s;
if((n-k) == 1){
    cout<<"YES"<<endl;
    return;
}
map<char, int> seen;
for(int i=0; i<n; i++){
    seen[s[i]]++;
}
int odd = 0;
for(auto it : seen){
    if(it.second % 2 != 0){
        odd++;
    }
}
if((n-k) % 2 == 0){
    if(odd > k){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
    
}
else{
    if((odd <= k) || ((odd - k) == 1)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}