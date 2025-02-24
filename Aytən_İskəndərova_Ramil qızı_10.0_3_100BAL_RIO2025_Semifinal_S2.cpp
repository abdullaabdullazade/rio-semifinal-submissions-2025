#include<bits/stdc++.h>
#define AI ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;//11:18 cry :((((((((((
void solve()
{
    ll n,i,s=0;
    cin>>n;
    ll a[n];
    map<ll,ll>mp;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]=i+1;
    }
    sort(a,a+n);
    for(i=0;i<n;i++)
    a[i]=mp[a[i]];
   /* for(i=0;i<n;i++)
    cout<<a[i]<<' ';
    cout<<endl;*/
    i=1;
    if(n!=1 and abs(a[0]-a[1])!=1)
    s++;
    while(i<n)
    {
        s++;
        if(a[i-1]==a[i]+1)
        while(a[i-1]==a[i]+1 and i<n)
        i++;
        else if(a[i-1]+1==a[i])
        while(a[i-1]+1==a[i] and i<n)
        i++;
        else
        {
            if(i!=n-1 and abs(a[i]-a[i+1])==1)
            s--;
            i++;
        }
      //  cout<<i<<' '<<s<<endl;
    }
    if(n==1)
    s=1;
    cout<<s<<endl;
}
int main()
{
    AI
    ll t;
    cin>>t;
    while(t--)
    solve();
}
