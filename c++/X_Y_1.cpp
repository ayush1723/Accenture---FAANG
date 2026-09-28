#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const ll INF = 4e18;

vector<vector< int > > dp(1e4+1 , vector<int>(1e4+1 , -1));

int f(int i , int j , int s , int r , string &x , string &y , string &y_copy){
    if(i>j){
        return 0;
    }
    if(dp[i][j] != -1){
        return dp[i][j];
    }

    int mini = 1e9;
    for(int k=i; k<=j; k++)
    {
        
        if(y_copy.find(x.substr(i , k-i+1)) != string::npos)mini = min(mini , r + f(k+1 , j , s , r , x , y , y1));
        if(y.find(x.substr(i , k-i+1)) != string::npos)mini = min(mini , s + f(k+1 , j , s , r , x , y , y1));
    }

    return mini;
}
int solve(int s , int r , string x, string y)
{
    string y_copy = y;
    reverse(y_copy.begin(), y_copy.end());
    return f(0 , x.size()-1 , s, r , x , y , y_copy);
}

int main(){
    string x , y;
    cin >> x >> y;
    int s, r;
    cin >> s >> r;
    int ans = solve(s , r, x , y);
    if(ans==1e9){
        cout<<"Impossible";
        return 0;
    }
    cout << ans;

    return 0;

}
