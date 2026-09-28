#include<bits/stdc++.h>
using namespace std;

int main(){
    int p=0;
    int q=0;
    int a[5][5];
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin>>a[i][j];
            if(a[i][j] == 1){
                p=i;
                q=j;
            }
        }
    }
    int sum=0;
    if(p == 2 || q == 2){
        if(p==2 && q==2){
            sum=0;
        }
        else if(p==2){
            sum += abs(2-q);
        }
        else{
            sum += abs(p-2);
        }
    }
    else{
        sum += abs(p-2);
        sum += abs(q-2);
    }
    cout<<sum<<endl;
}