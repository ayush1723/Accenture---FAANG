#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    int flag=1;
    while(n>=1){
        if(flag == 1){
            if(n%2==0){
                n -= n;
            }else{
                n -= n-1;
            }
            flag=0;
        }
        else{
            if(n%2==0){
                n -= n-1;
            }
            else{
                n -= n;
            }
            flag=1;
        }
    }
    if(flag == 0){
        cout<<"Mahmoud"<<endl;
    }
    else{
        cout<<"Ehab"<<endl;
    }
}