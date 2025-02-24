#include<bits/stdc++.h>
using namespace std;
#define int long long
#define all(v) v.begin(), v.end()

const int sz = 1e5 + 6, inf = 1e9 + 7;
int n, a[sz], ind[sz];
map<int, int> mp;

void solve()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        ind[i] = 0;
        cin >> a[i];
        mp[a[i]];
    }
    int cnt = 0;
    for(auto p : mp)
    {
        mp[p.first] = ++cnt;
    }
    for(int i = 1; i <= n; i++)
    {
        a[i] = mp[a[i]];
        ind[a[i]] = i;
    }
    cnt = 0;
    for(int i = 1; i <= n;)
    {
        int j = i + 1;
        int d = ind[i + 1] - ind[i];
        while(j < n)
        {
            if(ind[j + 1] - ind[j] == d) j++;
            else break;
        }
        i = j + 1;
        cnt++;
    }
    cout << cnt << '\n';
    mp.clear();
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while(t--) solve();
}
