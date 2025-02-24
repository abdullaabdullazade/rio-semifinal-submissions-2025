#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll a[n + 1];
    for (ll i = 1; i <= n; i++) cin >> a[i];
    ll dp[n + 1][2];
    dp[1][0] = dp[1][1] = 1;
    for (ll i = 2; i <= n; i++)
    {
        dp[i][0] = dp[i][1] = min(dp[i - 1][0], dp[i - 1][1]) + 1;
        dp[i][a[i] > a[i - 1]] = min(dp[i - 1][a[i] > a[i - 1]], dp[i][a[i] > a[i - 1]]);
    }
    cout << min(dp[n][0], dp[n][1]) << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    cin >> t;
    for (ll cs = 1; cs <= t; cs++) solve();
}


