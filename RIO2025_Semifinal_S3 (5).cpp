#include<bits/stdc++.h>
#define ll int
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
    ll n, i, j;
    cin >> n;
    ll a[n+5];
    for(i = 1; i <= n; i++)
        cin >> a[i];
    ll b[n+5];
    for(i = 1; i <= n; i++)
        b[i] = abs(a[i] - a[i+1]);
    b[n] = abs(a[n] - a[1]);
    for(i = 0; i < (1 << n); i++)
    {
        ll sum1 = 0, sum2 = 0;
        vl res;
        for(j = 0; j < n; j++)
        {
            if((i >> j) & 1)
            {
                sum1 += b[j+1];
                res.pb(j+1);
            }
            else
                sum2 += b[j+1];
        }
        if(sum1 == sum2 && sz(res) != 0 && sz(res) != n)
        {
            cout << sz(res) << "\n";
            for(auto u : res)
                cout << u << ' ';
            cout << "\n";
            return;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll tests = 1;
    cin >> tests;
    while(tests--)
    {
        solve();
    }
}
