#include<bits/stdc++.h>
using namespace std;

void solve() {
    string s[3];

    for(int i = 0; i < 3; i++) {
        cin >> s[i];
    }

    char ans[3];

    ans[0] = s[0][0];
    ans[1] = s[1][0];
    ans[2] = s[2][0];

    cout << ans[0] << ans[1] << ans[2];

    cout << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}