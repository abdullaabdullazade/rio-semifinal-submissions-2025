#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t,ans,n,k;
    ll mod=1e9+7;
    cin>>t;
    while(t--)
    {
        ans=1;
        cin>>n;
        vector<ll>a(n);
        vector<ll>b(n);
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(ll i=0; i<n; i++) 
        {
            cin>>b[i];
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        k=0;
        for(ll i=b.size()-1; i>=0; i--)
        {
            ll say=a.end()-lower_bound(a.begin(), a.end(), b[i]);      
            say-=k;
            ans=(ans*say)%mod;
            k++;
        }
        cout<<ans<<endl;
    }
}