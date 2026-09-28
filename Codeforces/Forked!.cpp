#include<bits/stdc++.h>
using namespace std;
#define ll long long int


void solve()
{
    int a,b,k1,k2,q1,q2;
    cin>>a>>b>>k1>>k2>>q1>>q2;
    set<pair<int,int> > k,q;
    int x[4]={-1,1,-1,1}, y[4]={-1,-1,1,1};
    for(int i=0; i<4; ++i)
    {
        k.insert({k1+a*x[i],k2+b*y[i]});
        k.insert({k1+b*x[i],k2+a*y[i]});
        q.insert({q1+a*x[i],q2+b*y[i]});
        q.insert({q1+b*x[i],q2+a*y[i]});
    }

    int ct=0;
    for(auto it:k)
        if(q.find(it)!=q.end())
            ct++;
    cout<<ct<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}