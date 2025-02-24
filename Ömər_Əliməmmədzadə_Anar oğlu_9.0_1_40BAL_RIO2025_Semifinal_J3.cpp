#include <bits/stdc++.h>
// #define int int64_t
using namespace std;

const int N = 1501;
char a[N][N];
int n, m;

bool ok(int x, int y) {
    set<char> s;
    for (int i = 1; i <= m; i++)
        if (i != y)
            s.insert(a[x][i]);
    for (int i = 1; i <= n; i++)
        if (i != x)
            s.insert(a[i][y]);
    return s.size() <= 1;
}

signed main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    int res = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            res += ok(i, j);
    cout << res;
} // C