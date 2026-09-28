// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    int maxi = 0;
    int ele = 0;
    
    for(int i = 0; i < n; i++) {
        int temp = 0;
        for(int j = 0; j < n; j++) {
            int x = v[i] ^ v[j];
            temp += x;
        }
        if(maxi < temp) {
            maxi = temp;
            ele = v[i];
        }
    }
    
    cout << ele << " " << maxi << "\n";





}