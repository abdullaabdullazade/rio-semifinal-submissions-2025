#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,k;
    cin>>n>>k;
    set <ll> st;
    vector <vector<ll>> v (n, vector<ll> (k));
    for (int i=0; i<n; i++) {
        for (int j=0; j<k; j++) {
            cin>>v[i][j];
            st.insert(v[i][j]);
        }
        sort (v[i].begin(), v[i].end());
    }
    ll ans=1e18;
    for (auto i=st.begin(); i!=st.end(); i++) {
        ll mi=*i;
        ll maks=*i;
        for (int j=0; j<n; j++) {
            auto o1=lower_bound(v[j].begin(), v[j].end(), mi);
            if (o1==v[j].end()) {
                maks=1e18;
            }
            else {
                ll x=*o1;
                maks=max(maks,x);
            }
        }
        ans=min(ans, maks-mi);
    }
    cout<<ans;
}