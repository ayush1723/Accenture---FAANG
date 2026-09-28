#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,k;
        cin>>x>>y>>k;
        if(x>=y){
            cout<<x<<endl;
        }
        else{
            int p=y-x;
            if(k >= p){
                cout<<y<<endl;
            }
            else{
                int q=y-(x+k);
                cout<<y+q<<endl;
            }
        }
    }
}