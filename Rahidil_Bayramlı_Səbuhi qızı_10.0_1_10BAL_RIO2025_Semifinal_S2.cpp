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
    ll a[n+5], b[n+5];
    for(i = 1; i <= n; i++){
        cin >> a[i];
        b[i] = a[i];
    }
    if(n == 1)
        cout << 0 << "\n";
    else
    {
        sort(a+1, a+n+1);
        map<ll, ll>mpp, mpn;
        for(i = 1; i <= n; i++)
        {
            if(i - 1 >= 1)
                mpp[a[i]] = a[i-1];
            if(i + 1 <= n)
                mpn[a[i]] = a[i+1];
        }
        ll res = 0, x = -1;
        //0 -> p, 1 -> n
        for(i = 1; i <= n; i++)
            a[i] = b[i];
        vl vect;
        for(i = 1; i <= n - 1; i++)
        {
            if(mpn[a[i]] == a[i+1])
                vect.pb(1);
            else    if(mpp[a[i]] == a[i+1])
                vect.pb(-1);
            else
                vect.pb(0);
        }
        cout << 1 + count(all(vect), 0) << "\n";
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
