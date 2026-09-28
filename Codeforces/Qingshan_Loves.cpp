#include<bits/stdc++.h>
using namespace std;

bool strchk(string s, int n){
    for(int i=1; i<n; i++){
        if(s[i] == s[n-i+1]){
            return false;
        }
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(n % 2 != 0){
            cout<<-1<<endl;
            continue;
        }
        bool check = strchk(s,n);
        if(check){
            cout<<0<<endl;
            continue;
        }
        int mid=n/2;
        int i=mid;
        while(s[i] == s[i+1]){
            i++;
            continue;
        }
        int j=i+1;
        vector<int> v;
        int x=0;
        if(j == s.size()){
            s = s + '0';
            s = s + '1';
            x++;
            v.push_back(j);
        }
        while((i >= 0 && j < s.size()) && (x < 300)){
            if(s[i] != s[j]){
                i--;
                j++;
            }
            else{
                s[j] = '0';
                s = s + '1';
                s = s + '1';
                x++;
                v.push_back(j);
            }
            if(j == s.size()){
                if(i<0) continue;
                s = s + '0';
                s = s + '1';
                x++;
                v.push_back(j);
            }
        }
        if(i<0 && j == s.size()){
            cout<<x<<endl;
            for(int i=0; i<v.size(); i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}