#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define ins inssert

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,a;
        cin>>n;
        vector<ll>q(n);
        vector<ll>y(n);
        vector<ll>v;
        for(ll i=0; i<n; i++)
        {
            cin>>q[i];
        }
        sort(q.begin(), q.end());
        for(ll i=0; i<n; i++)
        {
            cin>>y[i];
        }
        sort(y.begin(), y.end());
        for(ll i=0; i<n; i++)
        {
            int k=q.end()-lower_bound(q.begin(), q.end(), y[i]);
            v.pb(k);
        }
        ll ans=1;
        sort(v.begin(), v.end());
        for(ll i=0; i<n; i++)
        {
            v[i]=v[i]-i;
            ans*=v[i];
        }
        if(ans<=0)
            cout<<0<<endl;
        else
            cout<<ans<<endl;
    }
}
