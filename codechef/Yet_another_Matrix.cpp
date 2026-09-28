#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
        cin>>n;
	    vector<int> v(n);
	    vector<int> b(n);
	    for(int i=0; i<n; i++) cin>>v[i];
	    for(int i=0; i<n; i++) cin>>b[i];
	    sort(v.begin(), v.end());
	    sort(b.begin(), b.end(), greater<int>());
	    int x = v[0] + b[0];
	    int flag = 0;
	    for(int i=0; i<n; i++){
	        if(v[i] + b[i] != x){
	            flag = 1;
	            break;
	        }
	    }
	    if(flag == 1){
	        cout<<-1<<endl;
	    }
	    else{
	        for(int i=0; i<n; i++){
	            cout<<v[i]<<" ";
	        }
	        cout<<endl;
	        for(int i=0; i<n; i++){
	            cout<<b[i]<<" ";
	        }
	    }
	}
}
