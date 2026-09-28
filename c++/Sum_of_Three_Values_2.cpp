#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin>>n>>x;
    vector<int> input(n);
    for(int i=0; i<n; i++){
        cin>>input[i];
    }
    vector<int>  v;
    int flag = 0;
    for(int i=0; i<n; i++){
        set<pair<long long int, int> > st;
        for(int j=i+1; j<n; j++){
            int q = input[i] + input[j];
            if(q>x) continue;
            int w = x-q;
            if(st.find(w) != st.end()){
                v.push_back(i+1);
                v.push_back(j+1);
                v.push_back(st.find(w).second);
            }
        }
    }
    if(v.size() != 0){
        for(int i=0; i<3; i++) cout<<v[i]<<" ";
        cout<<endl;
    }
    else{
        cout<<"IMPOSSIBLE"<<endl;
    }
}