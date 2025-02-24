/// Author:Mahammad Mammadov ///
#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define pb push_back
#define eb emplace_back
#define mod 1000000007
using namespace std;
vector<ll>mm;
void sieve(ll n)
{
    vector<bool>p(n+1,true);
    for(ll i=2;i<=n;i++)
    {
        if(p[i])
        {
            for(ll j=i*i;j<=n;j+=i)
            {
                p[j]=false;
            }
        }
    }
    for(ll i=1;i<=n;i++)
    {
        if(p[i])
        {
            mm.pb(i);
        }
    }
}
void solve()
{
    ll n,m,i,j,k;
    cin>>n;
    vector<ll>a(n);
    vector<ll>b(n);
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    ll ans=0;
    do
    {
        bool flag=true;
        for(i=0;i<n;i++)
        {
            if(a[i]<b[i])
            {
                flag=false;
            }
        }
        ans+=flag;
    }while(next_permutation(b.begin(),b.end()));
    cout<<ans<<nl;
}
int main()
{
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
    ll t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
