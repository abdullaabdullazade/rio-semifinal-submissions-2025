#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define pb push_back
#define ins insert
#define ll long long
const int MAXN = (int)(2e5 + 7);
const int MOD = (int)(1e9 + 7);
const int INF = (int)(1e9 + 7);
/*
vector <int> g[MAXN];
int was[MAXN];
int binpow(int x, int y)
{
    if (y == 0)
    {
        return 1;
    }
    if (y % 2 == 0)
    {
        int z = binpow(x, y / 2);
        return z * z;
    } else
    {
        return binpow(x, y - 1) * x;
    }
}
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
*/

void solve()
{
    ll l, r;
    cin >> l >> r;
    for (ll i = l; i <= r; i++)
    {
        string s = to_string(i);
        string s1 = s;
        reverse(s1.begin(), s1.end());
        if (s == s1)
        {
            cout << "Palindrome!" << endl;
        }
        else
        {
            cout << i << endl;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio();
    cin.tie();
    cout.tie();
    /*
    int n, m;
    cin >> n >> m;
    int x, y;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        g[x].pb(y);
        g[y].pb(x);
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!was[i])
        {
            ans++;
            dfs(i);
        }
    }
    cout << ans << endl;
    */
    int t = 1;
    // cin >> t;
    while(t--)
    {
        solve();
    }
}
