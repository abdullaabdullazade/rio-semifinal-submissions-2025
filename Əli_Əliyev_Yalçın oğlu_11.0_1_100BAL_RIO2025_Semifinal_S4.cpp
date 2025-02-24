#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

void solve()
{
    ll n, k;
    cin >> k >> n;
    pair<ll, ll> a[n * k];
    for (ll i = 0; i < k; i++)
        for (ll j = 0; j < n; j++) cin >> a[i * n + j].first, a[i * n + j].second = i;
    sort(a, a + n * k);
//    for (auto i : a) cout << i.first << " ";
//    cout << endl;
//    for (auto i : a) cout << i.second << " ";
//    cout << endl;
    ll ans = 1e18, l = 0;
    ll cnt[k + 1];
    for (ll i = 0; i <= k; i++) cnt[i] = 0;
    ll cur = 0;
    for (ll r = 0; r < n * k; r++)
    {
        cur += !cnt[a[r].second]++;
        if (cur == k)
        {
            while (l < r and cnt[a[l].second] > 1) cnt[a[l].second]--, l++;
            ans = min(ans, a[r].first - a[l].first);
        }
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
//    cin >> t;
    for (ll cs = 1; cs <= t; cs++) solve();
}
