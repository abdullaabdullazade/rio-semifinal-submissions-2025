#include <bits/stdc++.h>
using namespace std;
 
signed main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--) {
        int n, inv = 0;
        cin >> n;
        vector<int> bit(n + 1);
 
        auto add = [&](int pos) {
            for (int i = pos; i <= n; i += i & -i)
                bit[i]++;
        };
 
        auto ask = [&](int pos) {
            int sum = 0;
            for (int i = pos; i; i -= i & -i)
                sum += bit[i];
                return sum;
            };
 
        vector<bool> vis(n + 1);
        bool found = 0;
        for (int i = 0, x; i < n; i++) {
            cin >> x;
            if (vis[x]) {
                found = 1;
            }
            vis[x] = 1;
            inv += ask(n) - ask(x);
            add(x);
        }
        if (found) cout << "Yes\n";
        else cout << (inv & 1 ? "No\n" : "Yes\n");
    }
}
