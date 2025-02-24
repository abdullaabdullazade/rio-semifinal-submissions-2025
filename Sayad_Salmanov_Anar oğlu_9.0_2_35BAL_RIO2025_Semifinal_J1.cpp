#include<bits/stdc++.h>
#define ll long long
#define en "\n"
#define ios ios_base::sync_with_stdio(0); cin.tie(0)
using namespace std;
void solve()
{
    ll h,m,d;
    char c;
    cin>>h>>c>>m>>d;
    if(h==0)
    {
        h=12;
    }
    if(d>=1440)
        d%=1440;
    ll tot=h*60+m+d;
    h=tot/60;
    m=tot%60;
    if(h>=24)
    {
        h-=24;
    }
    if(h%10==h)
        cout<<0<<h<<":";
    else cout<<h<<":";
    if(m%10==m)
        cout<<0<<m<<en;
    else cout<<m<<en;
}
signed main()
{
    ios;
    ll t;
    cin>>t;
    while(t--)
        solve();
}
