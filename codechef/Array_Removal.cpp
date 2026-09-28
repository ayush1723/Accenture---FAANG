#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() 
{
    int t;
    cin>>t;
    while(t--){
      
     int n;
     cin>>n;
     string s,b;
     cin>>s>>b;
     
     
     bool F = true;
     
     for(int i = 0;i<n;i++){
       if(s[i]=='0'&&b[i]=='1'){
         F = false;
         break;
       }
       else if(s[i]=='1'){
         break;
       }
     }
     
     cout<< ((F) ? "YES" : "NO") <<endl;
     
    
      
    }
    return 0;
}