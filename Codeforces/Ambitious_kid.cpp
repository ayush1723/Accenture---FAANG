#include<bits/stdc++.h>
using namespace std;

void sieve(int n){
    vector<int> v(n, 0);
    for(int i=2; i<=n; i++){
        if(v[i] == 0){
            for(int j=i*i; j<=n; j=j+i){
                v[j] = 1;
            }
        }
    }
    for(int i=2; i<=n; i++){
        if(v[i] == 0){
            cout<<i<<endl;
        }
    }
    return;
}
int main(){
    int n;
    cin>>n;
    sieve(n);
}