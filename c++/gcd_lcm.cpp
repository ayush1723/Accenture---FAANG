#include<bits/stdc++.h>
using namespace std;

int gcdkl(int n1, int n2){
    if(n1 % n2 == 0){
        return n2;
    }
    int r = n1 % n2;
    n1 = n2;
    n2 = r;
    return gcdkl(n1, n2);
}
int main(){
    int n1, n2;
    cin >> n1 >> n2;
    cout << gcdkl(n1, n2);
}