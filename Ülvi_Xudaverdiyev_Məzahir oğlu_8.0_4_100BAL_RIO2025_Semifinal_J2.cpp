#include<bits/stdc++.h>
#define ll long long
#define all(x) x.begin(),x.end()
const ll mod=1e9+7;
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
    ll n;
    cin>>n;
    vector<ll> v(n);
    vector<ll> v1(n);
    vector<ll> v2(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    for(ll i=0;i<n;i++){
        cin>>v1[i];
    }
    sort(all(v));
    sort(all(v1));
    for(ll i=0;i<n;i++){
        auto it=upper_bound(all(v1),v[i]);
        v2[i]=it-v1.begin();
    }
    ll res=1;
    for(ll i=0;i<n;i++){
        res*=v2[i]-i;
        res%=mod;
    }
    if(res>0) cout<<res<<'\n';
    else cout<<0<<'\n';
    }
}

