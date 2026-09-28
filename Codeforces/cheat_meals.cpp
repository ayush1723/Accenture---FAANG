#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll maximumSubarraySum(vector<ll>& arrey, int s, int e) {
    ll maxsofar = LLONG_MIN, maxendhere = 0;

    for (int i = s; i <= e; i++) {
        maxendhere = maxendhere + arrey[i];
        if (maxsofar < maxendhere){
            maxsofar = maxendhere;
        }
        if (maxendhere < 0){
            maxendhere = 0;
        }
    }
    return maxsofar;
}

void solvethis() {
    int n;
    cin >> n;
    vector<ll> v;
    for (int i = 0; i < n; i++){
        int p;
        cin>>p;
        v.push_back(p);
    }
    int pre = 0;
    ll an = LLONG_MIN;
    for (int i = 1; i < n; i++) {
        if ((abs(v[i]) % 2) == (abs(v[i - 1]) % 2)) {
            an = max(an, maximumSubarraySum(v, pre, i - 1));
            pre = i;
        }
    }
    an = max(an, maximumSubarraySum(v, pre, n - 1));
    cout << an << endl;
}

int main() {
    int tt;
    cin>>tt;
    while(tt--) {
        solvethis();
    }
}
