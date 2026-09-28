#include<bits/stdc++.h>
using namespace std;


int middleOfThree(int a, int b, int c)
{
    if ((a < b && b < c) || (c < b && b < a))
       return b;
    else if ((b < a && a < c) || (c < a && a < b))
       return a;
    else
       return c;
}

int main(){
    int x,y,z;
    cin>>x>>y>>z;
    if(x == y && y == z){
        cout<<0<<endl;
    }
    else if(x == y || x == z){
        cout<<abs(y-z)<<endl;
    }
    else if(x == y || y == z){
        cout<<abs(y-x)<<endl;
    }
    else if(x != y && x != z && y != z){
        int mid=middleOfThree(x,y,z);
        int sum = abs(mid-x)+abs(mid-y)+abs(mid-z);
        cout<<sum<<endl;
    }
}