#include<bits/stdc++.h>
using namespace std;
#define int long long
#define all(v) v.begin(), v.end()

const int sz = 1e3 + 6, inf = 1e9 + 7;
int n, m, a[sz], b[sz];

void solve()
{
    cin >> n >> m;
    if(n != 2) exit(0);
    for(int i = 1; i <= m; i++) cin >> a[i];
    for(int i = 1; i <= m; i++) cin >> b[i];
    sort(a + 1, a + 1 + m);
    sort(b + 1, b + 1 + m);
    int ans = inf;
    for(int i = 1; i <= m; i++)
    {
        auto lb = lower_bound(a + 1, a + 1 + m, b[i]);
        if(lb != a + 1 + m)
        {
            ans = min(ans, *lb - b[i]);
        }
        lb = lower_bound(b + 1, b + 1 + m, a[i]);
        if(lb != b + 1 + m)
        {
            ans = min(ans, *lb - a[i]);
        }
    }
    cout << ans;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while(t--) solve();
}
