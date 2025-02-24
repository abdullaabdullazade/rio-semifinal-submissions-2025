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
string pluss (string s)
{
    char ch=s[s.size()-1];
    if (ch!='9')
    {
        int eded = ch+'0';
        eded++;
        ch = eded-'0';
        s[s.size()-1]= ch;
        return s;
    }
    else
    {
        string scopy = s;
        reverse(scopy.begin(), scopy.end());
        bool bul =false;
        for (int i=0 ; i<scopy.size() ; i++)
        {
            if (scopy[i]!='9')
            {
                int eded =scopy[i]+'0';
                eded++;
                char ch = eded-'0';
                scopy[i]= ch;
                bul = true;
                break;
            }
            else
            {
                scopy[i]='0';
            }
        }
        if (bul!=true)
        {
            scopy = scopy+"1";
        }
        reverse(scopy.begin(), scopy.end());
        return scopy;
    }
}
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
    ll n;
    cin>>n;
    if (n==2)
    {
        ll k;
        cin>>k;
        vector<ll>a(k);
        vector<ll>b(k);
        for (int i=0 ; i<k ; i++) cin>>a[i];
        for (int i=0 ; i<k ;i++) cin>>b[i];
        ll mini = INT_MAX;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        for (int i=0 ; i<k ; i++)
        {
            auto it = *lower_bound(a.begin(), a.end(), b[i]);
            mini = min(mini, abs(it-b[i]));
        }
        for (int i=0 ; i<k ; i++)
        {
            auto it = *lower_bound(b.begin(), b.end(), a[i]);
            mini = min(mini, abs(it-a[i]));
        }
        cout<<mini<<endl;
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
    t = 1;
    while (t--){
        solve();
    }
}
