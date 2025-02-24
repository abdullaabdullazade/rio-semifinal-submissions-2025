#include <bits/stdc++.h>
using namespace std;

#define int long long

const int sz = 2e5 + 5;
const int inf = 1e18;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i], b[i] = a[i];
    reverse(b.begin(), b.end());
    cout << (is_sorted(a.begin(), a.end()) or is_sorted(b.begin(), b.end()) ? 1 : 2) << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) solve();
}
