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
    ll n, i, j, sum = 0;
    cin >> n;
    ll a[n+5];
    for(i = 1; i <= n; i++)
        cin >> a[i];
    ll b[n+5];
    for(i = 1; i <= n - 1; i++)
        b[i] = abs(a[i] - a[i+1]), sum += b[i];
    b[n] = abs(a[n] - a[1]);
    sum += b[n];
    ll x[sum+5];
    ll dp[sum+5];
    dp[0] = 1;
    x[0] = 1;
    for(j = 1; j <= sum; j++)
        dp[j] = 0, x[j] = n + 1;
    for(j = 1; j <= n; j++)
    {
        for(i = sum; i >= 0; i--){
            if(dp[i-b[j]] && !dp[i] && i-b[j]>=0){
                dp[i] = 1;
                x[i] = j;
            }
        }
    }
    if(!dp[sum/2])
    {
        cout << "-1\n";
        return;
    }
    if(sum == 0)
    {
        cout << "1\n1\n";
        return;
    }
    vl res;
    ll f = x[sum/2], k = sum/2;
    while(k > 0)
    {
        res.pb(f);
        k -= b[f];
        f = x[k];
    }
    cout << sz(res) << "\n";
    sort(all(res));
    for(auto u : res)
        cout << u << ' ';
    cout << "\n";
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
