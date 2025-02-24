#include<bits/stdc++.h>
using namespace std;
#define int long long
#define all(v) v.begin(), v.end()

const int sz = 22, inf = 1e9 + 7;
int n, a[sz], b[sz];

void solve()
{
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n - 1; i++) b[i] = abs(a[i] - a[i + 1]);
    b[n - 1] = abs(a[n - 1] - a[0]);

    int sum = accumulate(b, b + n, 0LL);
    if(sum % 2)
    {
        cout << -1 << '\n';
        return;
    }

    if(sum == 0)
    {
        cout << 1 << '\n' << 1 << '\n';
        return;
    }

    vector<int> v;
    for(int i = 1; i < (1 << n); i++)
    {
        int s = 0;
        v.clear();
        for(int j = 0; j < n; j++)
        {
            if((1 << j) & i)
            {
                v.push_back(j + 1);
                s += b[j];
            }
        }
        if(sum == s * 2)
        {
            cout << v.size() << '\n';
            for(int j : v) cout << j << " ";
            cout << '\n';
            return;
        }
    }
    cout << -1 << '\n';
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while(t--) solve();
}
