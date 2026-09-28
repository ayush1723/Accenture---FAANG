#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int gcd(long long int c, long long int m) 
{ 
  if (m == 0) 
    return c; 
  return gcd(m, c % m); 
}  
int lcm(int a, int b) 
{ 
    return (a / gcd(a, b)) * b; 
} 

void find(int n) {
    int A = 1, B = 2, C = 3;
    while (true) {
        int eR = lcm(A, B) + lcm(B, C) + lcm(C, A);
        if (eR == n) {
            cout << A << " " << B << " " << C << endl;
            break;
        }
        C++;
        if (C > n) {
            B++;
            C = B + 1;
        }
        if (B > n - 1) {
            A++;
            B = A ;
            C = B ;
        }
        if (A > n - 2) {
            cout << -1 << endl;
            break;
        }
    }
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        find(n);
    }
    return 0;
}
