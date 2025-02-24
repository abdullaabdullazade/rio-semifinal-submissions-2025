#include<bits/stdc++.h>
using namespace std;
#define int long long
#define all(v) v.begin(), v.end()

const int sz = 2e6 + 2, inf = 1e9 + 7;
int n, a[sz], b[sz];
bool dp[sz];
vector<int> v[sz];

void solve()
{
    for(int i = 0; i < sz; i++)
    {
        dp[i] = 0;
        v[i].clear();
    }
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i < n; i++) b[i] = abs(a[i] - a[i + 1]);
    b[n] = abs(a[n] - a[1]);

    int sum = accumulate(b + 1, b + 1 + n, 0LL);
    if(sum % 2)
    {
        cout << -1 << '\n';
        return;
    }

    if(sum == 0)
    {
        cout << 1 << '\n' << 1 << '\n';
        return;
    }

    sum = 0;
    dp[0] = 1;
    for(int i = 1; i <= n; i++)
    {
        sum += b[i];
        for(int j = sum; j >= b[i]; j--)
        {
            if(dp[j]) continue;
            dp[j] |= dp[j - b[i]];
            if(dp[j])
            {
                v[j] = v[j - b[i]];
                v[j].push_back(i);
            }
        }
    }
    if(dp[sum / 2] == 0) cout << -1 << '\n';
    else
    {
        cout << v[sum / 2].size() << '\n';
        for(int i : v[sum / 2]) cout << i << " ";
        cout << '\n';
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while(t--) solve();
}
