#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

#define int long long
#define F first
#define S second
#define pb push_back
#define endl '\n'

using namespace std;
using namespace __gnu_pbds;

const int N = 1e5 + 5;
const int mod = (int)1e9 + 7;
typedef tree<int,
            null_type,
            less<int>,
            rb_tree_tag,
            tree_order_statistics_node_update> indexed_set;
/*
int pw(int n, int a)
{
    int res = 1;
    while (a > 0) {
        if (a % 2) {
            res = res * n;
            a --;
        }
        n = n * n;
        a /= 2;
    }
    return res;
}*/
int a[N], b[N];
void solve()
{
    int n, ans = 1, ok = 1;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i ++) {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b + n);
    for (int i = 0; i < n; i ++) {
        mp[b[i]] = i;
    }
    for (int i = 1; i < n; i ++) {
        if ((mp[a[i]] - mp[a[i - 1]] == -1) or (mp[a[i]] - mp[a[i - 1]] == 1)) {
            continue;
        }
        ans ++;
    }
    cout << ans << '\n';
}
signed main()
{
    ios_base::sync_with_stdio();
    cin.tie();
    cout.tie();
    int T = 1;
    cin >> T;
    while (T --) {
        solve();
    }
}
