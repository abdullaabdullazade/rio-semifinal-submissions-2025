#include<bits/stdc++.h>
#define AI ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;//11:20 cry :((((((((((
void solve()
{
    ll n,m,i,j,mi=1e9,x,y;
    cin>>n>>m;
    vector<vector<ll>>a(n,vector<ll>(m));
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        cin>>a[i][j];
        sort(a[i].begin(),a[i].end());
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            bool bo=true;
            ll ma=0;
            for(x=0;x<n;x++)
            {
                if(x==i)
                continue;
                auto z=lower_bound(a[x].begin(),a[x].end(),a[i][j]);
                if(z==a[x].end())
                {
                    bo=false;
                    break;
                }
                ma=max(ma,*z);
            }
            if(bo)
            mi=min(mi,ma-a[i][j]);
            //if(bo)
           // cout<<mi<<' '<<i<<' '<<j<<' '<<ma<<endl;
            else
            j=m;
        }
    }
    cout<<mi<<endl;
}
int main()
{
    AI
    ll t;
    t=1;
    while(t--)
    solve();
}
