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
        /*for(int i =0; i < n; i++)
        {
            for(int j = 0; j < k; j++)
            {
                cout << g[i][j] << " ";
            }
            cout << endl;
        }*/
        int ans = 1000000007;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < k; j++)
            {
                bool stop = 0;
                int mini = g[i][j];
                int mx = 0;
                for(int u = 0; u < n; u++)
                {
                    if(u != i)
                    {

                        auto x = lower_bound(g[u].begin(), g[u].end(), g[i][j]);
                        if(x != g[u].end())
                        {

                            int num = *x;
                            //cout << num << endl;
                            mx = max(mx, num);
                        }
                        else{stop = 1; break;}
                    }
                }
                if(!stop)
                ans = min(ans, mx - mini);
            }
        }
        cout << ans << endl;
    }
}
