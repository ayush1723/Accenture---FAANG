#include <iostream>
#include <vector>
using namespace std;

#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        bool check = true;
        for(int i=0; i<n; i++){
            if(v[i] != v[0]){
                check = false;
                break;
            }
        }
        if(check){
            cout<<"NO"<<endl;
        }
        else if(n == 4){
            if(v[0] + v[1] != v[2] + v[3]){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}