#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

#define int long long
#define F first
#define S second
#define pb push_back
#define endl '\n'

using namespace std;
using namespace __gnu_pbds;

const int N = 1e3 + 5;
const int mod = (int)1e9 + 7;
typedef tree<int,
            null_type,
            less<int>,
            rb_tree_tag,
            tree_order_statistics_node_update> indexed_set;
int n, k, ans = LLONG_MAX;

int a[N][N];
void solve()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i ++) {
        for (int j = 1; j <= k; j ++) {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= k; i ++) {
        for (int j = 1; j <= k; j ++) {
            ans = min(ans, abs(a[1][i] - a[2][j]));
        }
    }
    cout << ans << endl;
}
signed main()
{
    ios_base::sync_with_stdio();
    cin.tie();
    cout.tie();
    int T = 1;
    //cin >> T;
    while (T --) {
        solve();
    }
}
