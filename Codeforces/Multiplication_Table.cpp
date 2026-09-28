#include<bits/stdc++.h>
using namespace std;

//////////////////////////<-Template->//////////////////////////
#define ll long long int
#define ull unsigned long long
#define ld long double
#define pii pair<int, int>
#define pll pair<long long, long long>
#define PI 3.1415926535897932384626433832795
#define F first
#define S second
#define pb push_back
///////////////////////<-Data Struture->////////////////////////
#define vii vector<int>
#define vll vector<long long>
#define mp map<int, int>
#define mpl map<long long, long long>
#define pq priority_queue<int>
#define pql priority_queue<long long>
#define st set<int> 
#define stl set<long long>
///////////////////////<-Daily use->////////////////
#define MOD 1000000007

bool checker(ll n, ll x){
    ll sum = 0;
    for(ll i = 1; i <= n; i++){
        sum += min(n, x / i);
    }
    if(sum >= ((n*n)/2)+1){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    ll n;
    cin >> n;
    ll l = 1;
    ll h = n*n;
    ll ans = 1e16;
    while(l <= h){
        ll mid = (l + h) / 2;
        if(checker(n, mid)){
            ans = min(ans, mid);
            h = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    cout << ans << endl;
}


#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define int long long
#define endl "\n"
#define mod 1000000007
int32_t main()
{   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        if(n==1){
            cout<<"YES"<<endl;
        }
        else if(n==2){
            if(a[0]>a[1]){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
        else if(n==3){
            int b[3];
            b[0]=a[0];
            b[1]=a[1];
            b[2]=a[2];
            sort(b,b+3);
            if(b[1]==a[1]){
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
    return 0;
}