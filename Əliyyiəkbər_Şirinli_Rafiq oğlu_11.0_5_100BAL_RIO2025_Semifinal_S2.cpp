/*
#ifndef ONLINE_JUDGE
#include "AkbarKING.h"
#else
#define debug(...)
#define debugArr(...)
#define debugG(...)
#endif
*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define int long long
#define $AzH_TxdmN$ ios_base::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);
/*
#pragma GCC target("sse,sse2,sse3,ssse3,popcnt,abm,mmx,tune=native")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("no-stack-protector")
#pragma GCC optimize("unroll-loops")
#pragma GCC optimize("fast-math")
*/

#define ep emplace_back
#define pb push_back
#define pii pair<int,int>
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

using namespace std;
using namespace __gnu_pbds;

template <typename T>
using __indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using __indexed_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

mt19937_64 rng(chrono::steady_clock().now().time_since_epoch().count());

const int sz = 3e5+9;
const int LOG = 63;
const int MOD = 1e9+7;
const int INF = 1e18;
int a[sz];

struct SegmentTree
{
    vector<int> t;
    int n;
    int UNDEFINED_BEHAVIOUR = 0; // default
    SegmentTree(int size)
    {
        n = size;
        t.resize(n << 2);
    }
    void build(int node, int l, int r)
    {
        if (l == r)
        {
            t[node] = a[l];
            return;
        }
        int mid = (l + r) >> 1;
        build(node << 1, l, mid);
        build(node << 1 | 1, mid + 1, r);
        t[node] = t[node << 1] + t[node << 1 | 1];
    }
    void point_update(int node, int l, int r, int pos, int val)
    {
        if (l == r)
        {
            t[node] = val;
            return;
        }
        int mid = (l + r) >> 1;
        if (pos <= mid)
        {
            point_update(node << 1, l, mid, pos, val);
        }
        else
        {
            point_update(node << 1 | 1, mid + 1, r, pos, val);
        }
        t[node] = t[node << 1] + t[node << 1 | 1];
    }
    int get(int node, int l, int r, int ql, int qr)
    {
        if (l > qr || r < ql)
        {
            return UNDEFINED_BEHAVIOUR;
        }
        if (ql <= l && r <= qr)
        {
            return t[node];
        }
        int mid = (l + r) >> 1;
        return get(node << 1, l, mid, ql, qr) + get(node << 1 | 1, mid + 1, r, ql, qr);
    }
    int query(int l, int r)
    {
        return get(1, 1, n, l, r);
    }
    void upd_point(int pos, int val)
    {
        point_update(1, 1, n, pos, val);
    }
};

bool check(const int &x)
{
    string str = to_string(x);
    string rhs = str;
    reverse(all(rhs));
    return str == rhs;
}

int n;

void solve()
{
    cin >> n;
    vector<pii> v;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        v.ep(a[i], i);
    }
    sort(all(v));
    for (size_t i = 0; i < v.size(); ++i)
    {
        a[i + 1] = v[i].second;
    }
    /*
    cout << "ARRAY AFTER PERM SHIFT\n";
    for (int i = 1; i <= n; ++i)
    {
        cout << a[i] << " \n"[i == n];
    }
    */
    int res = 1, lst = a[1];
    for (int i = 2; i <= n; ++i)
    {
        if (lst == a[i] + 1 || lst == a[i] - 1)
        {
            lst = a[i];
        }
        else
        {
            lst = a[i];
            ++res;
        }
    }
    cout << (is_sorted(a + 1, a + 1 + n) ? 1LL : res) << '\n';
}

signed main()
{
    $AzH_TxdmN$
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}

