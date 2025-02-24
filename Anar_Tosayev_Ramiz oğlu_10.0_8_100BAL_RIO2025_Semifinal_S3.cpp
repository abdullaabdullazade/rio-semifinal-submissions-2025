#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin>>n;
    vector<ll>v(n+1);
    for (int i=1 ;i <=n ; i++)
        cin>>v[i];
    vector<ll>res;
    for (int i=1 ; i<=n-1;i ++)
    {
        if (v[i+1]>=v[i])
            res.push_back(i);
    }
    if (v[1]>=v[n])
        res.push_back(n);
    if (res.size()==n)
    {
        cout<<1<<endl<<1<<endl;
    }
    else
    {
        cout<<res.size()<<endl;
        for (auto i:res)
            cout<<i<<" ";
        cout<<endl;
    }
    /*ll n,m;
    cin>>n>>m;
    for (int i=0 ; i<m ; i++)
    {
        ll x,y;
        cin>>x>>y;
        g[x].push_back(y);
    }
    dfs(1);
    for (int i=1 ; i<=n ;i++)
        cout<<vis[i]<<" ";*/
}
int main()
{
    ll t;
    cin>>t;
    while (t--){
        solve();
    }
}
