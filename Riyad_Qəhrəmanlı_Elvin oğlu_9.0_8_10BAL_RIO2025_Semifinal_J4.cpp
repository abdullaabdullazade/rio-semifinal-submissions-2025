// Alhamdulillah
#include <bits/stdc++.h>
using namespace std;
#define int long long
const int sz = 2e5 + 5;
const int mod = 1e9 + 7;
int a[sz];
void solve()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    if (a[1] <= a[2] and a[2] <= a[3]) cout << "Yes" << endl;
    else if (a[3] <= a[1] and a[1] <= a[2]) cout << "Yes" << endl;
    else if (a[2] <= a[3] and a[3] <= a[1]) cout << "Yes" << endl;
    else cout << "No" << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }
}
