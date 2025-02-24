#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define MOD 1000000007
#define MAX 10000
#define InF 1e9
#define fi first
#define se second
#define in insert
#define er erase
#define ub upper_bound
#define lb lower_bound
#define pb push_back
#define pp pop_back
#define pll pair <ll, ll>

using namespace std;

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,m;
    cin >> n >> m;
    ll a[m], b[m];
    for(ll i = 0; i < m; i++){
        cin >> a[i];
    }
    for(ll i = 0; i < m; i++){
        cin >> b[i];
    }
    ll ans = 100000000000000;
    for(ll i = 0; i < m; i++){
        for(ll j = 0; j < m; j++){
            ans = min(ans, max(a[i], b[j]) - min(a[i], b[j]));
        }
    }
    cout << ans << endl;
}
