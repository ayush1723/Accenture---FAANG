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

struct Interactor{
    int hiddenNumber;
    int queriesTillNow;
    int limit;

    Interactor(){
        hiddenNumber = 49; 
        queriesTillNow = 0;
        limit = 10;
    }

    void checkTotalQuesries(){
        if(queriesTillNow >= limit){
            cout << "You have made more than required queries for " << hiddenNumber << endl;
        }
        assert(queriesTillNow < limit);
    }

    char make_query(int x){

        checkTotalQuesries();
        queriesTillNow++;

        //assert(queriesTillNow < limit);
        //meaning of above is 
        // if(queriesTillNow < limit) //don't do anything
        // else exit(1);

        cout << "? " << x << endl;
        if(x < hiddenNumber){
            return '<';
        }
        else if(x > hiddenNumber){
            return '>';
        }
        else{
            return '='; 
        }
    }
    bool validOutput(int x){
        if(x != hiddenNumber){
            cout << "Failed for " << hiddenNumber;
        }
        else{
            cout << "Passed for " << hiddenNumber << endl; 
        }
        return x == hiddenNumber;
    }

};

// void query(int mid){
//     cout << "? " << mid << endl;
// }

void solve(){
    Interactor interactor = Interactor();
    int l = 1, r = 100;
    int ans = 0;
    while(l <= r){
        int mid = (l + r) / 2;
        //query(mid);
        char codeforcesOut;
        //cin >> codeforcesOut; 

        codeforcesOut = interactor.make_query(mid);
        cout << codeforcesOut << endl;
        if(codeforcesOut == '='){
            ans = mid;
            break;
        }
        else if(codeforcesOut == '<'){
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }

    interactor.validOutput(ans);


    //cout << "! " << ans << endl;
}
int main(){
    solve();
}