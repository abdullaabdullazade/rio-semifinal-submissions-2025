#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int sz = 3e5 + 9;
int a[sz], t[sz << 2];

int get(int node, int l, int r, int ql, int qr)
{
    if (l > qr || r < ql)
    {
        return 0;
    }
    if (ql <= l && r <= qr)
    {
        return t[node];
    }
    int mid = (l + r) >> 1;
    return get(node << 1, l, mid, ql, qr) + get(node << 1 | 1, mid + 1, r, ql, qr);
}

void upd(int node, int l, int r, int pos, int val)
{
    if (l == r)
    {
        t[node] = val;
        return;
    }
    int mid = (l + r) >> 1;
    if (pos <= mid)
    {
        upd(node << 1, l, mid, pos, val);
    }
    else
    {
        upd(node << 1 | 1, mid + 1, r, pos, val);
    }
    t[node] = t[node << 1] + t[node << 1 | 1];
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        set<int> st;
        for (int i = 1; i <= n; ++i)
        {
            cin >> a[i];
            st.insert(a[i]);
        }
        if ((int)st.size() != n)
        {
            cout << "Yes\n";
        }
        else
        {
            for (int id = 0; id <= (n << 2); ++id)
            {
                t[id] = 0;
            }
            int cnt = 0;
            for (int i = 1; i <= n; ++i)
            {
                cnt += get(1, 1, n, a[i], n);
                upd(1, 1, n, a[i], 1);
            }
            cout << (cnt % 2 == 0 ? "Yes" : "No") << '\n';
        }
    }
}
