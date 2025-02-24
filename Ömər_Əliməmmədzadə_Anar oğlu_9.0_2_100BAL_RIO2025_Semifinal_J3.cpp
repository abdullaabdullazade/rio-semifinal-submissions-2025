#include <bits/stdc++.h>
// #define int int64_t
using namespace std;

const int N = 1501;
char a[N][N];
int n, m, res, r_sum[N], c_sum[N];

signed main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
            int k = a[i][j] - '0';
            c_sum[j] += k;
            r_sum[i] += k;
        }
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) {
            int x = r_sum[i] - a[i][j] + '0';
            int y = c_sum[j] - a[i][j] + '0';
            if (x == 0 and y == 0) res++;
            else if (x == m - 1 and y == n - 1) res++;
        }
    cout << res;
}