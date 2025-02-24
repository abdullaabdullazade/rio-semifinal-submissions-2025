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
vector<pll>g[sz];
ll res = LLONG_MAX, n, m;
void dijkstra(ll node)
{
    set<ll>st;
    set<pll> st2;
    priority_queue<pll>pq;
    map<ll, ll>mp;
    mp[node] = 0;
    pq.push({0, node});
    while(!pq.empty())
    {
        ll a = pq.top().s;
        pq.pop();
        if(a > (n - 1) * m)
            res = min(res, mp[a]);
        if(st.count(a))
            continue;
        st.insert(a);
        for(auto [u, w] : g[a])
        {
            if(mp.find(u) == mp.end())
            {
                mp[u] = mp[a] + w;
                pq.push({-mp[u], u});
            }
            else    if(mp[u] > mp[a] + w)
            {
                mp[u] = mp[a] + w;
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
        v.pb(LLONG_MAX);
        vect.pb(v);
    }
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < m; j++)
        {
            ll lb = lower_bound(all(vect[i+1]), vect[i][j]) - vect[i+1].begin();
            if(lb != m)
                g[i*m+j+1].pb({(i+1)*m+lb+1, abs(vect[i+1][lb] - vect[i][j])});
            lb--;
            if(lb >= 0)
                g[i*m+j+1].pb({(i+1)*m+lb+1, abs(vect[i+1][lb] - vect[i][j])});
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
