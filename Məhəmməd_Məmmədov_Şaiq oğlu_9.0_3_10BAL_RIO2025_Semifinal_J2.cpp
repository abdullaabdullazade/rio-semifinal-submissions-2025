/// Author:Mahammad Mammadov ///
#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define pb push_back
#define eb emplace_back
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
    string s;
    cin>>s>>n;
    ll a=int(s[0]-'0'),b=int(s[1]-'0'),c=int(s[3]-'0'),d=int(s[4]-'0');
    ll h=0;
    ll num1=a*10+b,num2=c*10+d;
    h+=(num1*60);
    h+=num2;
    h+=n;
    h%=1440;
    cout<<h/600;
    h%=600;
    cout<<h/60<<":";
    h%=60;
    if(h<10)
    {
        cout<<0<<h;
    }
    else
    {
        cout<<h;
    }
    cout<<nl;
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
