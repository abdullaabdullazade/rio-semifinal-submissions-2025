#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int sz = 3e5 + 9;
int a[sz], b[sz];

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
            b[i] = a[i];
            st.insert(a[i]);
        }
        reverse(b + 1, b + 1 + n);
        if ((int)st.size() != n)
        {
            cout << "Yes\n";
        }
        else if (is_sorted(b + 1, b + 1 + n))
        {
            cout << ((n * (n - 1) / 2) % 2 == 0 ? "Yes" : "No") << '\n';
        }
        else
        {
            int cnt = 0;
            for (int i = 1; i <= n; ++i)
            {
                for (int j = 1; j <= n; ++j)
                {
                    if (i < j && a[i] > a[j])
                    {
                        ++cnt;
                    }
                }
            }
            cout << (cnt % 2 == 0 ? "Yes" : "No") << '\n';
        }
    }
}
