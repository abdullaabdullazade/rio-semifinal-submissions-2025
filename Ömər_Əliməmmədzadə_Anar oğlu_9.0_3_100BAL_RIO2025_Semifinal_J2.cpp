#include <bits/stdc++.h>
#define int int64_t
using namespace std;

signed main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--) {
        int n, mod = 1e9 + 7;
        cin >> n;
        vector<int> a(n), b(n);
        for (int &i : a) cin >> i;
        for (int &i : b) cin >> i;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        vector<int> c;
        for (int i : b) {
            int k = lower_bound(a.begin(), a.end(), i) - a.begin();
            c.push_back(n - k);
        }
        int x = 0;
        for (int i = n - 1; i >= 0; i--)
            c[i] -= x++;
        int res = 1;
        for (int i : c)
            (res *= i) %= mod;
        cout << res << '\n';
    }
}