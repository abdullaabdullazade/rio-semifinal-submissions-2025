#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll MOD = 1e9 + 7;
void solve()
{
    ll n, say = 0, ans = 1, x = 0;
    cin >> n;
    vector<ll>a(n),b(n);
    for(ll i = 0;i < n;++i)
    {
        cin >> a[i];
    }
    for(ll i = 0;i < n;++i)
    {
        cin >> b[i];
    }
    sort(a.begin(),a.end());
    for(ll i = 0;i < n;++i)
    {
        say = 0;
        for(int j = 0;j < n;++j)
        {
            if(a[i] >= b[j])
            {
                say++;
            }
        }
        ans *= say - x;
        x++;
    }
    cout << ans % MOD << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--) {solve();}
}
