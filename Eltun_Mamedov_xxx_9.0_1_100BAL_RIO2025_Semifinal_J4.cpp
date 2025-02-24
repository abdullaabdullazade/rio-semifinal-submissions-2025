#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define int long long
typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_multiset;
const int mod = 1e9 + 7;
const int N = 2e5 + 5;

int a[N];

void solve() {

    int n;
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        s.insert(a[i]);
    }
    if (s.size() < n) {
        cout << "Yes" << '\n';
        return;
    }
    indexed_multiset ms;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int cnt = ms.order_of_key(-a[i]);
        ans += cnt;
        ms.insert(-a[i]);
    }
    cout << (ans % 2 ? "No" : "Yes") << '\n';
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
        solve();

}