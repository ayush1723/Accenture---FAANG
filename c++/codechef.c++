#include <iostream>
#include <vector>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t>0){
	    t--;
	    int A[6];
	    for(int i=0; i<6; i++){
	        cin>>A[i];
	    }
	    vector<int> Alice;
	    vector<int> Bob;
	    for(int i=0; i<3; i++){
	        Alice.push_back(A[i]);
	        Bob.push_back(A[i+3]);
	    }
	    sort(Alice.begin(), Alice.end());
	    sort(Bob.begin(), Bob.end());
	    int num1=0;
	    int num2=0;
	    for(int i=2; i>=0; i--){
	        num1 += Alice[i]*pow(10,i);
	        num2 += Bob[i]*pow(10,i);
	    }
	    if(num1 == num2){
	        cout<<"Tie"<<endl;
	    }
	    else if(num1 > num2){
	        cout<<"Alice"<<endl;
	    }
	    else{
	        cout<<"Bob"<<endl;
	    }
	}
}
