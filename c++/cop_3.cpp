#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        vector<long long> v;
        for(long long i=0; i<n; i++){
            int p;
            cin>>p;
            v.push_back(p);
        }
        int cnt=0;
        int i=0;
        int j=k-1;
        while(i<=(n-k) && j<n){
            for(int k=i; k<=j; k++){
                if(v[k] % 2 != 0){
                    cnt++;
                    break;
                }
            }
            i++;
            j++;
        }
        cout<<cnt<<endl;
    }
}