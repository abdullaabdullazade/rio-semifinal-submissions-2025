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
const ll sz = 1e6+5;
vl g[sz];
ll val[sz], mpmn[sz], mpmx[sz], mp[sz], vis[sz];
ll res = LLONG_MAX, n, m;
void dijkstra(ll node)
{
    for(ll i = 1; i <= n * m; i++)
    {
        vis[i] = 0;
        mpmn[i] = mpmx[i] = 0;
        mp[i] = 1e12;
    }
    priority_queue<pll>pq;
    mp[node] = 0;
    mpmn[node] = mpmx[node] = val[node];
    pq.push({0, node});
    while(!pq.empty())
    {
        ll a = pq.top().s;
        pq.pop();
        if(a > (n - 1) * m)
            res = min(res, mp[a]);
        if(vis[a])
            continue;
        vis[a] = 1;
        for(auto u : g[a])
        {
            if(mp[u] > mp[a] && mpmn[a] <= val[u] && val[u] <= mpmx[a])
            {
                mp[u] = mp[a];
                mpmn[u] = mpmn[a];
                mpmx[u] = mpmx[a];
                pq.push({-mp[u], u});
            }
            else    if(val[u] < mpmn[a] && mp[u] > mpmx[a] - val[u])
            {
                mp[u] = mpmx[a] - val[u];
                mpmn[u] = val[u];
                mpmx[u] = mpmx[a];
                pq.push({-mp[u], u});
            }
            else    if(val[u] > mpmx[a] && mp[u] > val[u] - mpmn[a])
            {
                mp[u] = val[u] - mpmn[a];
                mpmn[u] = mpmn[a];
                mpmx[u] = val[u];
                pq.push({-mp[u], u});
            }
        }
    }
}
void solve()
{
    ll i, j;
    cin >> n >> m;
    vector<vl>vect;
    for(i = 1; i <= n; i++)
    {
        vl v;
        for(j = 1; j <= m; j++)
        {
            ll x;
            cin >> x;
            v.pb(x);
        }
        sort(all(v));
        for(j = 0; j < m; j++)
            val[(i-1)*m+j+1] = v[j];
        v.pb(LLONG_MAX);
        vect.pb(v);
    }
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < m; j++)
        {
            for(ll k = 0; k < m; k++)
                g[i*m+j+1].pb((i+1)*m+k+1);
        }
    }
    ll ans = LLONG_MAX;
    for(i = 1; i <= m; i++)
    {
        dijkstra(i);
        ans = min(ans, res);
        res = LLONG_MAX;
    }
    cout << ans << "\n";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll tests = 1;
    //cin >> tests;
    while(tests--)
    {
        solve();
    }
}
