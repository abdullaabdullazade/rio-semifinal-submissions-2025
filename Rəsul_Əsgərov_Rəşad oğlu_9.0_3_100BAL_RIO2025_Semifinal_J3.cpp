#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n,m;
    cin>>n>>m;
    ll f[n][m];
    char c;
    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<m; j++)
        {
            cin>>c;
            if(c=='1')
                f[i][j]=1;
            else
                f[i][j]=0;
        }
    }
    ll a[n]={0}, b[m]={0};
    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<m; j++)
        {
            a[i]+=f[i][j];
            b[j]+=f[i][j];
        }
    }
    ll ans=0;
    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<m; j++)
        {
            ll k=0;
            k+=a[i];
            k+=b[j];
            if(a[i]+b[j]-f[i][j]*2==0 ||
               a[i]+b[j]-f[i][j]*2==m+n-2)
                ans++;
        }
    }
    cout<<ans<<endl;
}
