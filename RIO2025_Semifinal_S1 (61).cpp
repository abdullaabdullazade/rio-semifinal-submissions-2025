#include <bits/stdc++.h>
using namespace std;
#define ll long long
/*
ll maxi = 202020;
ll gcd(ll x, ll y)
{
    if (x==0)
        return y;
    return gcd(x%y, x);
}
vector<vector<ll>>g(maxi);
vector<ll>vis(maxi, 0);
void dfs(ll x)
{
    vis[x]=1;
    for (auto i:g[x])
    {
        if (vis[i]==0)
            dfs(i);
    }
}*/
bool isp(string s)
{
    string sr = s;
    reverse(sr.begin(), sr.end());
    if (sr==s)
        return true;
    else
        return false;
}
void solve()
{
    ll l,r;
    cin>>l>>r;
    for (int i=l ; i<=r ; i++)
    {
        string s = to_string(i);
        if(isp(s))
            cout<<"Palindrome!"<<endl;
        else
            cout<<i<<endl;
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
    solve();
}
