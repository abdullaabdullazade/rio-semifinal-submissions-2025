#include "bits/stdc++.h"
using namespace std;

#define int long long
#define endl '\n'

const long long sz = 1e5 + 5;
const long long inf = 1e18 + 9;
const long long mod = 1e9 + 7;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    int ans = 1, d = 0;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<int>());
    for (int i = 0; i < n; i++) {
        auto it = lower_bound(a.begin(), a.end(), b[i]);
        if (it == a.end()) {
            ans = 0;
            break;
        } else {
            int ind = it - a.begin();
            ans *= (n - ind - d);
            ans %= mod;
            d++;
        }
    }
    cout << ans % mod << endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int T = 1;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}