#include <bits/stdc++.h>
#define ll long long
#define dl double
#define st string
#define tst to_string
#define pb push_back
#define pf push_front
#define eb emplace_back
#define INF 1000000001
#define mxn 100001
#define mod 1000000007
#define come_on ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
int main()
{
    ll n,m,ans=0;
    cin>>n>>m;
    ll x[n]={0},y[m]={0};
    ll g[n][m];
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            char c;
            cin>>c;
            g[i][j]=c;
            if(c=='1')
            {
                x[i]++;
                y[j]++;
            }
        }
    }
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            ll k=x[i]+y[j];
            if(g[i][j]=='1')
            {
                k-=2;
            }
            if(k==0 || k==(n+m-2))
            {
                ans++;
            }
        }
    }
    cout<<ans;
}