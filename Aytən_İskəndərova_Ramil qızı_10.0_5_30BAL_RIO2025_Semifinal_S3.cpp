#include<bits/stdc++.h>
#define AI ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;//11:20 cry :((((((((((
void solve()
{
    ll n,i,j,s=0;
    cin>>n;
    ll a[n],b[n];
    vector<pair<ll,ll>>v;
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++)
    b[i]=abs(a[i]-a[(i+1)%n]),s+=b[i];
    if(s%2)
    {
        cout<<-1<<endl;
        return;
    }
    for(ll mask=0;mask<(1<<n);mask++)
    {
        ll sum=0,say=0;
        for(i=0;i<n;i++)
        {
            if(mask&(1<<i))
            sum+=b[i],say++;
        }
        if(sum==s/2)
        {
            if(say==0 or n-say==0)
            continue;
            cout<<say<<endl;
            for(i=0;i<n;i++)
            {
                if(mask&(1<<i))
                cout<<i+1<<' ';
            }
            cout<<endl;
            return;
        }
    }
    cout<<-1<<endl;
}
int main()
{
    AI
    ll t;
    cin>>t;
    while(t--)
    solve();
}
