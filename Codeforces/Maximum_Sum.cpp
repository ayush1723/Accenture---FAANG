#include <bits/stdc++.h>
#define int long long
#define FOR(i, j, k) for(int i = j;i <= (k);++ i)
#define ROF(i, j, k) for(int i = j;i >= (k);-- i)
#define PII pair<int,int>
#define db double
#define sp(x) fixed << setprecision(x)
#define all(g) g.begin(), g.end()
#define M(x) x %= mod, x += mod, x %= mod
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define Yes cout << "Yes\n"
#define No cout << "No\n"
#define ANS cout << ans << '\n'
#define de(p) cout << #p << ' ' << p << '\n'
#define END(i, n) (i == n ? '\n' : ' ')
using namespace std;
const int N = 1e6 + 10, M = 1e5 + 10, mod = 1e9 + 7, INF = 0x3f3f3f3f;

int n, m, k;
int a[N];

void solve()
{
    cin >> n >> k;
    int sum = 0,res = 0;
    int ma = 0,mi = 0;
    FOR(i,1,n)
    {
        cin >> a[i];
        sum += a[i];
        mi = min(mi,sum);
        ma = max(ma,sum - mi);
        res += a[i];
    }
    FOR(i,1,k)
    {
        res = (res + ma) % mod;
        ma = ma * 2 % mod;
    }
    res = M(res);
    cout << res << '\n';
}

signed main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}

