#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        long long m;
        cin >> n >> m;
        
        vector<int> petals(n);
        for (int i = 0; i < n; ++i) {
            cin >> petals[i];
        }

        sort(petals.begin(), petals.end());

        long long total_petals = 0;
        long long total_cost = 0;
        int max_petals = 0;

        for (int i = 0; i < n; ++i) {
            if (i > 0 && petals[i] - petals[i-1] > 1) {
                break;
            }
            total_cost += petals[i];
            if (total_cost > m) {
                break;
            }
            total_petals += petals[i];
            max_petals = total_petals;
        }

        cout << max_petals << endl;
    }

    return 0;
}