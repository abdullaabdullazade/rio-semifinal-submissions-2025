#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;
const ll N = 2e5 + 5;
ll a[N], n, b[N];
bool check(vector<ll> &v)
{
    ll sum = 0, sum1 = 0;
    for (ll i = 0; i < n; i++) sum1 += b[i];
    for (ll i : v) sum += b[i];
    return sum * 2 == sum1;
}
void solve()
{
    cin >> n;
    for (ll i = 0; i < n; i++) cin >> a[i];
    vector<ll> v;
    for (ll i = 0; i + 1 < n; i++) b[i] = abs(a[i] - a[i + 1]);
    b[n - 1] = abs(a[n - 1] - a[0]);
    for (ll i = 0; i < n; i++) if (a[i] < a[(i + 1) % n]) v.push_back(i);
    assert(check(v));
    if (v.size() == 0) v.push_back(0);
    if (!check(v))
    {
        exit(-112);
        assert(0);
        cout << "-1\n";
        return;
    }
    cout << v.size() << endl;
    for (ll i = 0; i < v.size(); i++) cout << v[i] + 1 << " \n"[i + 1 == v.size()];
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    cin >> t;
    for (ll cs = 1; cs <= t; cs++) solve();
}

