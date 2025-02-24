#include <bits/stdc++.h>
#define int int64_t
using namespace std;

void solve() {
    int n, mod = 1e9 + 7;
    cin >> n;
    vector<int> a(n), b(n);
    for (int &i : a) cin >> i;
    for (int &i : b) cin >> i;
    vector<int> dp(1 << n);
    dp[0] = 1;
    for (int i = 1; i < (1 << n); i++) {
        int k = __builtin_popcount(i) - 1;
        for (int j = 0; j < n; j++)
            if (i & (1 << j) and b[k] <= a[j])
                (dp[i] += dp[i ^ (1 << j)]) %= mod;
    }
    cout << dp.back();
}

signed main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << '\n';
    }
}