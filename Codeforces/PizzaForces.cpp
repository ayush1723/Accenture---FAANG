#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n<=6){
            cout<<15<<endl;
        }
        else if(n>6 && n<=8){
            cout<<20<<endl;
        }
        else if(n>8 && n<=10){
            cout<<25<<endl;
        }
        else{
            int d = n/6;
            int r = n%6;
            if(r == 0){
                cout<<15*d<<endl;
            }
            else if(r <= 2){
                cout<<15*(d-1)+8<<endl;
            }
            else if(r <= 4){
                cout<<15*(d-1)+10<<endl;
            }
            else{
                cout<<15*(d+1)<<endl;
            }
        }
    }
}