#include<bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()

const int sz = 5e2 + 2, inf = 1e9 + 7;
int n, m, a[sz][sz], suff[sz * sz], prv[sz * sz], cur[sz * sz];
map<int, int> mp, pm;

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
        sort(a[i] + 1, a[i] + 1 + m);
    }
    int val = 0;
    for(auto p : mp)
    {
        mp[p.first] = ++val;
        pm[val] = p.first;
    }
    for(int i = 1; i <= n; i++) for(int j = 1; j <= m; j++) a[i][j] = mp[a[i][j]];
    // dp[i][k] is going to show the smallest possible max element until row i if the minimum element is k
    fill(prv + 1, prv + 1 + val, inf);
    fill(cur + 1, cur + 1 + val, inf);
    for(int i = 1; i <= m; i++) prv[a[1][i]] = a[1][i];
    for(int i = 2; i <= n; i++)
    {
        for(int k = 1; k <= val; k++)
        {
            suff[k] = prv[k];
            cur[k] = inf;
            auto lb = lower_bound(a[i] + 1, a[i] + 1 + m, k);
            if(lb != a[i] + 1 + m) cur[k] = max(prv[k], *lb);
            // first k - 1 of cur is equal to min of

        }
        for(int k = val - 1; k >= 1; k--) suff[k] = min(suff[k + 1], suff[k]);
        for(int j = 1; j <= m; j++)
        {
            int x = a[i][j];
            if(x + 1 <= val) cur[x] = min(cur[x], suff[x + 1]);
        }
        for(int i = 1; i <= val; i++) prv[i] = cur[i];
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
