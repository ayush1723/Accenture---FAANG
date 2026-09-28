#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, l, r;

    cin >> n >> m >> l >> r;

    if(n == m) {
        cout << l << " " << r << "\n";
        return;
    }

    if(l == 0) {
        cout << l << " " << m << "\n";
        return;
    }

    if(m <= r) {
        cout << 0 << " " << m << "\n";
    }
    else {
        int rr = r;
        int ll = -1 * (m - r);

        cout << ll << " " << rr << "\n";
    }
}

int main() {
    int t;
    cin>>t;
    
    while(t--) {
        solve();
    }
}