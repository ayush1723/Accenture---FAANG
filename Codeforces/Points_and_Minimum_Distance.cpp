#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v;
        for(int i=0; i<2*n; i++){
            int p;
            cin>>p;
            v.push_back(p);
        }
        sort(v.begin(), v.end());
        int sum=0;
        for(int i=0; i<n-1; i++){
            sum += abs(v[i]-v[i+1]);
        }
        for(int i=n; i<(2*n)-1; i++){
            sum += abs(v[i]-v[i+1]);
        }
        cout<<sum<<endl;
        int i=n-1;
        int j=2*n-1;
        while(i>=0){
            cout<<v[j]<<" "<<v[i]<<endl;
            i--;
            j--;
        }
    }
}