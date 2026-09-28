#include <iostream>
#include <string>

using namespace std;

void solve() {
    int n, x;
    cin>> n >> x;

    string str;
    cin >> str;

    int score = 0;

    for (auto ch : str) {
        if (ch == '0' && !score) {
            cout << "NO\n";
            return;
        } else if (ch == '0') {
            score -= 1;
        } else {
            score = x;
        }
    }

    cout << "YES\n";
}

int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}