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
    ll n, i, j;
    cin >> n;
    ll a[n+5];
    for(i = 1; i <= n; i++)
        cin >> a[i];
    if(n == 1)
        cout << 0 << "\n";
    else
    {
        bool ok = true;
        if(a[2] < a[1])
            ok = false;
        ll cnt = 1;
        for(i = 3; i <= n; i++)
        {
            if((a[i] > a[i-1] && ok) || (a[i] < a[i-1] && !ok))
                continue;
            cnt++;
            ok = (a[i+1] > a[i]);
        }
        cout << cnt << "\n";
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
