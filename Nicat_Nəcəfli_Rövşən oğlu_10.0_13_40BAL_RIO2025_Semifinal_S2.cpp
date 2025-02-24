/*
======================================================
//    Designed by "Dph" aka "Doublen"               \\
//    Contest rating: 1227 (max. pupil, 1341)       \\
======================================================
*/

#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
/////////////////////////////////////////
#define pb push_back
#define ins insert
#define F first
#define S second
#define endl "\n"
#define sync                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long ll;
typedef unsigned long long ull;
/////////////////////////////////////////
const int MAXN = (int)(1e5 + 7);
// const int MAXM = (int)(1e9 + 7);
// const int INF = (int)(1e9 + 7);
const int MOD = (int)(1e9 + 7);
// const int dx[8] = {-1, 0, 1, 0, 1, 1, -1, -1};
// const int dy[8] = {0, -1, 0, 1, -1, 1, 1, -1};
// const int dx_k[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
// const int dyh_k[8] = {-1, 1, -2, 2, -2, 2, -1, 1};
vector <int> g[MAXN];
int was[MAXN];
void dfs(int x)
{
    was[x] = 1;
    for (int i = 0; i < g[x].size(); i++)
    {
        if (!was[g[x][i]])
        {
            dfs(g[x][i]);
        }
    }
}
void solve()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b + n);
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == a[i + 1] + 1)
        {
            g[i].pb(i + 1);
            g[i + 1].pb(i);
        } else if (a[i] + 1 == a[i + 1]) {

            g[i].pb(i + 1);
            g[i + 1].pb(i);
        }
        else
        {
            g[i].pb(i);
        }
    }
    g[n - 1].pb(n - 1);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (!was[i])
        {
            dfs(i);
            ans++;
        }
    }
    cout << ans << endl;
    for (int i = 0; i <= n + 2; i++)
    {
        was[i] = 0;
        g[i].clear();
    }
}

signed main()
{
    sync;
    //  freopen("input.in", "r", stdin);
    //  freopen("output.out", "w", stdout);
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    cerr << endl
         << "Running Speed -> " << clock() * 1000.0 / CLOCKS_PER_SEC << "ms" << endl;
}
