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
        for(long long i=0; i<n; i++){
            if(v[i] % 2 != 0){
                if((i+(k-1)<n) && (i-(k-1))>=0){
                    cnt += ((k-1)*2)-1;
                }
                else if(i+(k-1)<n){
                    if(i != 0){
                        cnt += (k-1)+i-1;
                    }
                    else{
                        cnt += 1;
                    }
                }
                else if(i-(k-1)>=0){
                    if(i != (n-1)){
                        cnt += (k-1)+(n-(i+1))-1;
                    }
                    else{
                        cnt += 1;
                    }
                }
            }
        }
        if(cnt != 0) cout<<cnt<<endl;
        else cout<<-1<<endl;
    }
}