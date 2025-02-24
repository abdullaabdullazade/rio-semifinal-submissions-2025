#pragma GCC optimize("O3")
//#pragma GCC optimize("unroll-loops")
//#pragma GCC optimize("fast-math")
//#pragma GCC optimize("no-stack-protector")

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    constexpr int64_t MOD = 1e9 + 7;

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int64_t t;
    cin >> t;

    while (t--) {
        int64_t n, ans = 1;
        cin >> n;

        vector<int64_t> boxes(n), toys(n);
        vector<char> used(n, false);

        for (int64_t &el : boxes) {
            cin >> el;
        }

        for (int64_t &el : toys) {
            cin >> el;
        }

        sort(toys.rbegin(),toys.rend());
        sort(boxes.begin(), boxes.end());

        for (const int64_t &toy : toys) {
            int64_t possibleCnt = 0;
            int64_t idx = lower_bound(boxes.begin(), boxes.end(), toy) - boxes.begin();

            while (idx < n && used[idx]) {
                idx++;
            }

            for (int64_t i = idx; i < n; i++) {
                if (!used[i]) {
                    possibleCnt++;
                }
            }

            ans *= possibleCnt;
            if (ans == 0) {
                break;
            }
            ans %= MOD;
            used[idx] = true;
        }

        cout << ans % MOD << '\n';
    }

    return 0;
}
