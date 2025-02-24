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
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int h, m, extra;
        char c;
        
        cin >> h >> c >> m >> extra;

        m += extra;
        h += m / 60;
        m %= 60;
        h %= 24;

        if (h < 10) {
            cout << 0;
        }
        cout << h;
        cout << ':';
        if (m < 10) {
            cout << 0;
        }
        cout << m;
        cout << '\n';
    }

    return 0;
}