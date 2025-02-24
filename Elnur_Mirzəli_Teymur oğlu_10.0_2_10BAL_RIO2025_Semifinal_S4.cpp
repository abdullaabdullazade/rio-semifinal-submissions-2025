#include "bits/stdc++.h"
#define polyanna ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define endl '\n'
#define pb push_back
using namespace std;
int main(){
    polyanna
    ll n, k, ed, ans=1e18;
    cin>>n>>k;
    vector<ll>a;
    vector<ll>b;
    for(ll i=0; i<k; i++){
        cin>>ed;
        a.pb(ed);
    }
    for(ll i=0; i<k; i++){
        cin>>ed;
        b.pb(ed);
    }
    for(ll i=0; i<k; i++){
        ed=a[i];
        for(ll j=0; j<k; j++){
            ans=min(ans, abs(b[j]-ed));
        }
    }
    cout<<ans;
}
