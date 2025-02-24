#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define vl vector<ll>
#define vi vector<int>
#define pll pair<ll, ll>
#define pii pair<int, int>
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define sz(v) (ll)(v.size())
#define pb push_back
#define f first
#define s second
using namespace std;
void solve()
{
    ll n,m, i, j;
    cin >> n >> m;
    ll grid[n+5][m+5];
    vl vect;
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= m; j++){
            cin >> grid[i][j];
            vect.pb(grid[i][j]);
        }
    }
    ll res = LLONG_MAX;
    for(auto u : vect)
    {
        ll l = 0, r = 1e9, bst = LLONG_MAX;
        while(l <= r)
        {
            ll mid = (l + r) / 2;
            bool ok = true;
            for(i = 1; i <= n; i++)
            {
                bool fl = false;
                for(j = 1; j <= m; j++)
                {
                    if(u <= grid[i][j] && grid[i][j] <= u + mid)
                    {
                        fl = true;
                        break;
                    }
                }
                if(!fl)
                    ok = false;
            }
            if(ok)
            {
                bst = mid;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
        res = min(res, bst);
    }
    cout << res << "\n";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll tests = 1;
    //cin >> tests;
    while(tests--)
    {
        solve();
    }
}
