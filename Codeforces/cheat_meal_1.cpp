#include <iostream>
#include <bits/stdc++.h>

#define int long long
#define all(x) x.begin(),x.end()
using namespace std;

signed main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        int n, shila, menu, mixi, ans;
        cin>>n;
        shila=0;
        vector<int> v(n+1), div;
        for (int i = 1; i <= n; i++)
        {
            cin>>v[i];
            shila+=v[i];
            v[i]=shila;
        }
        for (int i = 1; i*i <= n; i++)
        {
            if (n%i==0) 
            {
                div.push_back(i);
                div.push_back(n/i);
            }
        }
        ans=0;
        for (auto &&it : div)
        {
            menu=1e18, mixi=0;
            for (int i = it; i <= n; i+=it)
            {
                menu=min(menu,v[i]-v[i-it]);
                mixi=max(mixi,v[i]-v[i-it]);
            }
            ans=max(ans,mixi-menu);
        }
        cout<<ans<<'\n';
    }
    
    return 0;
}