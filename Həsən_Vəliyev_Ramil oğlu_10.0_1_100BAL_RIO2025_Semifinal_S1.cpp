#include <bits/stdc++.h>
#define vll vector <ll>
#define pb push_back
#define in insert
#define all(a) a.begin(), a.end()
#define ll long long
using namespace std;
void solve()
{
    ll n, k;
    cin >> n >> k;
    vector <vll> a(n, vll (k));
    for(ll i = 0 ; i < n; i++)
        for(ll j = 0; j < k; j++)
            cin >> a[i][j];
    ll ans = LLONG_MAX;
    for(ll i = 0 ; i < n; i++)
    {
        for(ll h = 0; h < k; h++)
        for(ll j = 0 ;j < k ;j++)
        {
            ans = min(ans, abs(a[1 - i][j] - a[i][h]));
        }
    }
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    // cin >> t;
    while(t--)
        solve();

}
