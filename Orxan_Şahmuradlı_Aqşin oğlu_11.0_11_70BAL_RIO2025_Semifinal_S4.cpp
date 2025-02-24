#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,k;
    cin>>n>>k;
    set <ll> st;
    vector <set<ll>> v (n);
    for (ll i=0; i<n; i++) {
        for (ll j=0, x; j<k; j++) {
            cin>>x;
            v[i].insert(x);
            st.insert(x);
        }
    }
    ll ans=1e18;
    for (auto i=st.begin(); i!=st.end(); i++) {
        ll mi=*i;
        ll maks=*i;
        for (int j=0; j<n; j++) {
            auto o1=v[j].lower_bound(mi);
            if (o1==v[j].end()) {
                maks=1e18;
            }
            else {
                ll x=*o1;
                maks=max(maks,x);
            }
            if (maks-mi>=ans) {
                break;
            }
        }
        ans=min(ans, maks-mi);
    }
    cout<<ans;
}