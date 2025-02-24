#include <bits/stdc++.h>
using ll = long long;
using namespace std;
void solve()
{
    ll n,ans=1;
    ll mod=1e9+7;
    cin>>n;
    vector<ll>v(n),a(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    ll say=0;
    sort(v.begin(),v.end());
    sort(a.begin(),a.end());
    for(ll i=n-1;i>=0;i--){
        ll d=lower_bound(v.begin(),v.end(),a[i])-v.begin();
        ans=(ans*(n-say-d))%mod;
        say++;
    }
    cout<<ans<<endl;
}
int main(){
    ll tt=1;
    cin>>tt;
    while(tt--){
      solve();
    }
}
