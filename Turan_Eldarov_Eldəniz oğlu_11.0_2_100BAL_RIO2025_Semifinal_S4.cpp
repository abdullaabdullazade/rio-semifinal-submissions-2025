#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define pb push_back
#define all(v) v.begin(), v.end()
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
using namespace std;
int mod;
int gcd(int a, int b)
{
    if(b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
int modpow(int a, int b)
{
    int ans = 1;
    while(b != 0)
    {
        if(b % 2)
        {
            ans *= a;
            ans %= mod;
        }
        a *= a;
        a %= mod;
        b /= 2;
    }
    return ans;
}
int inv(int a)
{
    return (modpow(a, mod - 2)) % mod;
}
signed main()
{
    ios_base::sync_with_stdio();cin.tie();cout.tie();
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        map<int, int> m;
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            m[v[i]] = i;
        }
        int ans = 1;
        sort(all(v));
        for(int i = 0; i < n - 1; i++)
        {
            if(abs(m[v[i]] - m[v[i + 1]]) != 1)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
}
