#include <bits/stdc++.h>
using namespace std;

#define int long long

const int sz = 2e5 + 5;
const int inf = 1e18;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(k), b(k);
    for (auto &i : a) cin >> i;
    for (auto &i : b) cin >> i;
    int mn = inf;
    for (int i = 0; i < k; i++)
    {
        int fi = a[i];
        for (int j = 0; j < k; j++)
        {
            int se = b[j];
            mn = min(mn, max(fi, se) - min(fi, se));
        }
    }
    cout << mn << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--) solve();
}
