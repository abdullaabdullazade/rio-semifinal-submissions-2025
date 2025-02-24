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
int a[N];
void solve()
{
    int l, r;
    cin >> l >> r;
    for (int i = l; i <= r; i ++) {
        string s = to_string(i);
        string t = s;
        reverse(t.begin(), t.end());
        if (s == t) {
            cout << "Palindrome!" << endl;
        }else cout << i << endl;
    }
}
signed main()
{
    int T = 1;
    //cin >> T;
    while (T --) {
        solve();
    }
}
