#include <bits/stdc++.h>
// #define int int64_t
using namespace std;

signed main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--) {
        int n, res = 0;
        cin >> n;
        vector<int> a(n), b(n);
        for (int &i : a) cin >> i;
        for (int &i : b) cin >> i;
        sort(a.begin(), a.end());
        do {
            bool ok = 1;
            for (int i = 0; i < n; i++)
                ok &= (b[i] <= a[i]);
            res += ok;
        } while (next_permutation(a.begin(), a.end()));
        cout << res << '\n';
    }
}