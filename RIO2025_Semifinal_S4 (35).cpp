#include<bits/stdc++.h>
#define AI ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;//11:20 cry :((((((((((
void solve()
{
    ll n,m,i,j,mi;
    cin>>n>>m;
    vector<vector<ll>>a(n,vector<ll>(m));
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        cin>>a[i][j];
        sort(a[i].begin(),a[i].end());
    }
    mi=abs(a[0][0]-a[1][0]);
    if(m==1)
    {
        cout<<abs(a[0][0]-a[1][0])<<endl;
        return;
    }
    for(i=0;i<m;i++)
    {
        auto j=lower_bound(a[0].begin(),a[0].end(),a[1][i]);
        if(j!=a[0].end())
        mi=min(mi,abs(a[1][i]-*j));
        if(j!=a[0].begin())
        {
            j--;
            mi=min(mi,abs(a[1][i]-*j));
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
