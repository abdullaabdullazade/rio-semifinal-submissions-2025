#include "bits/stdc++.h"
#define polyanna ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        map<ll, ll>mp;
        ll n, ans=0;
        cin>>n;
        ll a[n];
        for(ll i=0; i<n; i++){
            cin>>a[i];
            mp[a[i]]=i+1;
        }
        sort(a, a+n);
        for(ll i=1; i<n; i++){
            if(abs(mp[a[i]]-mp[a[i-1]])!=1){
                ans++;
            }
        }
        cout<<ans+1<<endl;
    }
}
