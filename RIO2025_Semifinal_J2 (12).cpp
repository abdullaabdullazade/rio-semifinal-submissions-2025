#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#pragma GCC optimize("fast-math")
#pragma GCC optimize("no-stack-protector")

#include <iostream>
#include <vector>
#include <algorithm>
#include <array>
#include <utility>
#include <iomanip>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <deque>
#include <list>
#include <bitset>
#include <functional>
#include <cinttypes>
using namespace std;

#ifdef ONLINE_JUDGE
#define debug(...) ;
#else
template <typename T>
void debug(const T &val) {
    cout << "[DEBUG]: " << val << '\n';
}
#endif

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

        for (const int64_t &toy : toys) {
            int64_t possibleCnt = 0, bestIdx = -1;
            for (int64_t i = 0; i < n; i++) {
                if (!used[i] && boxes[i] >= toy) {
                    possibleCnt++;
                    if (bestIdx == -1 || boxes[bestIdx] > boxes[i]) {
                        bestIdx = i;
                    }
                }
            }
            
            ans *= possibleCnt;
            if (ans == 0) {
                break;
            }
            used[bestIdx] = true;
        }

        cout << ans % MOD << '\n';
    }

    return 0;
}