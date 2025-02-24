#include <bits/stdc++.h>
// #include "AkbarKING.h"
#define int long long
using namespace std;

const int sz = 2e3 + 9;
const int INF = 1e18;
int a[sz][sz];

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int k, n;
    cin >> k >> n;
    for (int i = 1; i <= k; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            cin >> a[i][j];
        }
        sort(a[i] + 1, a[i] + 1 + n);
    }
    vector<int> ptr(k + 1, 1);
    int res = INF;
    while(1)
    {
        int mnid = 1;
        int mxCurr = a[mnid][ptr[mnid]];
        for (int i = 2; i <= k; ++i)
        {
            if (a[i][ptr[i]] < a[mnid][ptr[mnid]])
            {
                mnid = i;
            }
            mxCurr = max(mxCurr, a[i][ptr[i]]);
        }
        res = min(res, mxCurr - a[mnid][ptr[mnid]]);
        if (ptr[mnid] == n)
        {
            break;
        }
        ++ptr[mnid];
        // debug(mnid, mxCurr, res);
    }
    cout << res << '\n';
}
