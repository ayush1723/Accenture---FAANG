#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define int long long
#define endl "\n"
#define mod 1000000007
int32_t main()
{ 
    int t=1;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n>>k;
        if(n==1){
            cout<<k<<endl;
        }
        else{
            int f=0;
            if(k+1==(1<<((int)log2(k)))){
                cout<<k<<" ";
            }
            else{
                cout<<(1<<(int)log2(k))-1<<" ";
                f=k-((1<<(int)log2(k))-1);
            }
            for(int i=0; i<(n-1); i++){
                cout<<f<<" ";
                f=0;
            }
            cout<<endl;
        }
    }
    return 0;
}