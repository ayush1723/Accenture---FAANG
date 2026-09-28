#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s = "";
        cin>>s;
        stack<char> st;
        for(int i=0; i<s.size(); i++){
            if(s[i] != 'b' && s[i] != 'B'){
                st.push(s[i]);
            }
            else{
                if(s[i] == 'b'){
                    string c = "";
                    for(int j=0; j<st.size(); j++){
                        if(st.top() >= 'a' && st.top() <= 'z'){
                            st.pop();
                            break;
                        }
                        else{
                            c = c + st.top();
                            st.pop();
                        }
                    }
                    for(int j=c.size()-1; j>=0; j--){
                        st.push(c[j]);
                    }
                }
                else{
                    string c = "";
                    for(int j=0; j<st.size(); j++){
                        if(st.top() >= 'A' && st.top() <= 'Z'){
                            st.pop();
                            break;
                        }
                        else{
                            c += st.top();
                            st.pop();
                        }
                    }
                    for(int j=c.size()-1; j>=0; j--){
                        st.push(c[j]);
                    }
                }
            }
        }
        string res = "";
        for(int i=0; i<st.size(); i++){
            res += st.top();
            st.pop();
        }
        
        for(int i=res.size()-1; i>=0; i--){
            cout<<res[i];
        }
        cout<<endl;
    }
}