#include<bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()

const int sz = 5e2 + 2, inf = 1e9 + 7;
int n, m, a[sz][sz], dp[sz * sz];
map<int, int> mp, pm;
vector<int> prv, cur;

void solve()
{
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
            mp[a[i][j]] = 1;
        }
    }
    int val = 0;
    for(auto p : mp)
    {
        mp[p.first] = ++val;
        pm[val] = p.first;
    }
    for(int i = 1; i <= n; i++) for(int j = 1; j <= m; j++) a[i][j] = mp[a[i][j]];
    // dp[i][k] is going to show the smallest possible max element until row i if the minimum element is k
    prv.resize(val + 1, inf);
    cur.resize(val + 1, inf);
    for(int i = 1; i <= m; i++) prv[a[1][i]] = a[1][i];
    for(int i = 2; i <= n; i++)
    {
        for(int k = 1; k <= val; k++)
        {
            cur[k] = inf;
            for(int j = 1; j <= m; j++)
            {
                int x = a[i][j];
                if(x < k)
                {
                    cur[x] = min(cur[x], prv[k]);
                }
                else
                {
                    if(x <= prv[k]) cur[k] = min(cur[k], prv[k]);
                    else cur[k] = min(cur[k], x);
                }
            }
        }
        prv = cur;
    }
    /* cout << '\n';
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << '\n';
    }*/
    int mn = inf;
    for(int l = 1; l <= val; l++)
    {
        int r = prv[l];
        if(r != inf)
        {
            //cout << l << " " << r << endl;
            mn = min(mn, pm[r] - pm[l]);
        }
    }
    cout << mn;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while(t--) solve();
}
