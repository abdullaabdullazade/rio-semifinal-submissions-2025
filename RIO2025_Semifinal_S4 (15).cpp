#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define pb push_back
#define all(v) v.begin(), v.end()
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define F first
#define S second
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
    t = 1;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> g[n];
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < k; j++)
            {
                int x;
                cin >> x;
                g[i].pb(x);
            }
            sort(g[i].begin(), g[i].end());
        }
        int ans;
        priority_queue<pair<int, pair<int, int> >> pq;
        priority_queue<pair<int, pair<int, int>> , vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> gr;
        for(int i = 0; i < n; i++)
        {

            pq.push({g[i][0], {i, 0}});
            gr.push({g[i][0], {i, 0}});
            int mx = pq.top().F;
            int mn = gr.top().F;
            int dif = mx - mn;
            ans = dif;
        }
        int j = 0;
        while(j < k)
        {
            int mx = pq.top().F;
            int mn = gr.top().F;
            int dif = mx - mn;
            ans = min(ans, dif);
            int i = gr.top().S.F;
            int jn = gr.top().S.S;
            if(jn + 1 == k)
            {
                break;
            }
            gr.pop();
            gr.push({g[i][jn + 1], {i, jn + 1}});

            pq.push({g[i][jn + 1], {i, jn + 1}});
        }
        cout << ans;
    }
}
