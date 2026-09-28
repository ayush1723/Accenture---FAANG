
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

void print_solution(vector<vector<int> > &ans, int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << ans[i][j] << " ";
        }
    }
    cout << endl;
    return;
}
void possible_path_1(int n, vector<vector<int> > &maze, vector<vector<int> > &ans, int x, int y){
    if(x == n-1 && y == n-1){
        ans[x][y] = 1;
        print_solution(ans, n);
        ans[x][y] = 0;
        return;
    }
    if(x >= n || x < 0 || y >= n || y < 0 || maze[x][y] == 0 || ans[x][y] == 1){
        return;
    }
    ans[x][y] = 1;
    possible_path_1(n, maze, ans, x-1, y);
    possible_path_1(n, maze, ans, x+1, y);
    possible_path_1(n, maze, ans, x, y-1);
    possible_path_1(n, maze, ans, x, y+1);
    ans[x][y] = 0;
}
int main(){
    int n;
    cin >> n;
    vector<vector<int> > maze(n, vector<int>(n));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> maze[i][j];
        }
    }
    vector<vector<int> > ans(n, vector<int>(n, 0));
    possible_path_1(n, maze, ans, 0, 0);
}