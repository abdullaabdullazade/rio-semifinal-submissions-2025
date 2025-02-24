#include <bits/stdc++.h>
#define vll vector <ll>
#define pb push_back
#define in insert
#define all(a) a.begin(), a.end()
#define ll long long
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    vll a(n);
    for(ll i = 0 ; i < n; i++)
            cin>> a[i];
    a.pb(a[0]);
    vll b(n);
    for(ll i = 0; i < n; i++)
        b[i] = abs(a[i] - a[i + 1]);
    ll sum = 0;
    for(ll i = 0 ;i < n; i++)
        sum += b[i];
    for(ll mask = 1; mask < (1ll << n); mask++)
    {
        vll f, s, fi, si;
        for(ll j = 0; j < n; j++)
        {
            if(mask & (1ll << j))
                f.pb(b[j]), fi.pb(j);
            else
                s.pb(b[j]), si.pb(j);
        }
        ll sum1 = 0;
        for(ll j : f)
            sum1 += j;
        if(sum1 == sum - sum1)
        {
            cout << f.size() << endl;
            for(ll j : fi)
                cout << j + 1 << " ";
            cout << endl;
            return;
        }
    }
    cout << -1 << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t;
    while(t--)
        solve();

}
