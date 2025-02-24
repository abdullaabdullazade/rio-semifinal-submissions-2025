#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define in insert
#define vl vector<ll>
#define all(v) v.begin(), v.end()
#define fi first
#define se second
#define endl "\n"
using namespace std;
ll inf = 1e17;
void solve(){
    ll n, i, j, ans = 0;
    cin >> n;
    vl v(n + 2);
    v[0] = -1;
    v[n + 1] = inf;
    map<ll, ll> mp;
    for(i = 1; i <= n; i++){
        cin >> v[i];
        mp[v[i]] = i;
    }
    sort(all(v));
    vl p;
    p.pb(-1);
    for(i = 1; i <= n; i++){
        p.pb(mp[v[i]]);
    }
    for(i = 1; i <= n; i++){
        if(abs(p[i] - p[i - 1]) != 1){ans ++;}
    }
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}
