#include <bits/stdc++.h>
using namespace std;

int tab[1000002];

void fun() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> tab[i];
    }

    int maks = tab[n-1] - tab[0];
    for (int i = 1; i < n; i++) {
        maks = max(maks, tab[i-1] - tab[i]);
    }

    for (int i = 0; i < n; i++) {
        maks = max(maks, tab[i] - tab[0]);
        maks = max(maks, tab[n-1] - tab[i]);
    }
    cout << maks << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        fun();
    }
}