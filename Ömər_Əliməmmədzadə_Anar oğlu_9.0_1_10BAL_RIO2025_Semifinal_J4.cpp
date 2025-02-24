#include <bits/stdc++.h>
// #define int int64_t
using namespace std;

signed main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &i : a) cin >> i;
        vector<bool> x(n);
        for (int i = 1; i < n; i++)
            x[i] = a[i] < a[i - 1];
        int cnt = 0;
        for (int i = 1; i < n; i++)
            cnt += (x[i] and !x[i - 1]);
        cout << (cnt % 2 ? "Yes\n" : "No\n");
    }
}