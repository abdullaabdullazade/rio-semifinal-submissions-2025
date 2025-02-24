#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  // 5 8 10    
  // 4 5 9 
  //
  ll t,n;
  cin>>t;
  while(t--)
  {
    cin>>n;
    vector<ll>a(n),b(n);
    for(ll i=0;i<n;i++)
    cin>>a[i];
    for(ll i=0;i<n;i++)
    cin>>b[i]; 
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    ll ans=1;
    for(ll i=n-1;i>=0;i--)
    {
     ll k=a.end()-lower_bound(a.begin(),a.end(),b[i]);
     k-=n-1-i;
     k=max(k,0ll);
     ans=(ans*k)%1000000007;
    }
    cout<<ans<<endl;
  }
}