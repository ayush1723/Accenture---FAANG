#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int arr[n + 1][n + 1];

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cin >> arr[i][j];
        }
    }

    set<int> s;

    for(int i = 1; i <= 2 * n; i++) {
        s.insert(i);
    }

    vector<int> ans((2 * n) + 1);

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            int x = arr[i][j];
            s.erase(x);
            ans[i + j] = x;
        }
    }

    ans[1] = *s.begin();

    for(int i = 1; i < (2 * n) + 1; i++) {
        cout << ans[i] << " ";
    }

    cout << "\n";
}

int main() {
    int t;
    cin>>t;
    
    while(t--) {
        solve();
    }
}