#include<bits/stdc++.h>
using namespace std;

//////////////////////////<-Template->//////////////////////////
#define ll long long int
#define ull unsigned long long
#define ld long double
#define pii pair<int, int>
#define pll pair<long long, long long>
#define PI 3.1415926535897932384626433832795
#define F first
#define S second
#define pb push_back
///////////////////////<-Data Struture->////////////////////////
#define vii vector<int>
#define vll vector<long long>
#define mp map<int, int>
#define mpl map<long long, long long>
#define pq priority_queue<int>
#define pql priority_queue<long long>
#define st set<int> 
#define stl set<long long>
///////////////////////<-Daily use->////////////////
#define MOD 1000000007

int maximizeUniqueLetters(const string& s) {
    int maxUniqueLetters = 0;

    for (int i = 1; i < s.length(); ++i) {
        // string leftSubstring = s.substr(0, i);
        // string rightSubstring = s.substr(i);

        string leftSubstring;
        string rightSubstring;
        for(int j=0; j<i; j++){
            leftSubstring += s[j];
        }
        for(int j = i; j < s.size(); j++){
            rightSubstring += s[j];
        }

        set<char> uniqueLeft(leftSubstring.begin(), leftSubstring.end());
        set<char> uniqueRight(rightSubstring.begin(), rightSubstring.end());

        set<char> commonLetters;
        for (char ch : uniqueLeft) {
            if (uniqueRight.count(ch) > 0) {
                commonLetters.insert(ch);
            }
        }

        int totalUniqueLetters = uniqueLeft.size() + uniqueRight.size() - commonLetters.size();
        maxUniqueLetters = max(maxUniqueLetters, totalUniqueLetters);
    }

    return maxUniqueLetters;
}


void solve(){
    string s;
    cin>>s;
    cout<<maximizeUniqueLetters(s)<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}