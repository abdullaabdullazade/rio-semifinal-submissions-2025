#include <bits/stdc++.h>
using namespace std;

using  ll = int64_t;

#define all(x) x.begin(), x.end()
#define vll vector<ll>
#define MOD 1000000007

ll getLb(ll x, vll v) {
    return (v.end() - lower_bound(v.begin(), v.end(), x));
}

void solve() {
    ll n;
    cin >> n;
    vll a(n), b(n);
    for (ll& x : b) cin >> x;
    for (ll& x :  a) cin >> x;

    sort(all(a));
    sort(all(b));

    for (ll i = 0; i < n; ++i) {
        if (a[i] > b[i]) {
            cout << 0 << endl;
            return;
        }
    }

    ll ans = 1;
    for (ll i = n - 1; i >= 0; --i) {
        ll lb = getLb(a[i], b) - (n - 1 - i);
        ans = (ans * lb) % MOD;
    }
    cout << ans << endl;

}

int main(int argc, char const *argv[])
{
    ll t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
