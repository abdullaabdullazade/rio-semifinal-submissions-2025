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
    vector<ll>v(n);
    for (int i=0 ; i<n ; i++)
        cin>>v[i];
    vector<ll>srtd = v;
    sort(srtd.begin(), srtd.end());
    map<ll,ll>evvel;
    map<ll,ll>sonra;
    for (int i=0 ; i<n ; i++)
    {
        if (i==0)
            evvel[srtd[i]]=-1;
        else
        {
            evvel[srtd[i]] = srtd[i-1];
        }
        if (i==n-1)
        {
            sonra[srtd[i]]=-1;
        }
        else
            sonra[srtd[i]]=srtd[i+1];
    }

    ll cnt=0;
    for (int i=0 ;i<n-1 ; i++)
    {

        if (!(v[i+1]==sonra[v[i]] or v[i+1]==evvel[v[i]]))
            cnt++;

    }
    cout<<cnt+1<<endl;
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
