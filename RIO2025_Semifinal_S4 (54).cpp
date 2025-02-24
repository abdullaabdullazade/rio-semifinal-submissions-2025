#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,k;
    cin>>n>>k;
    set <ll> ans;
    vector <vector<ll>> v (n, vector <ll> (k));
    for (int i=0; i<n; i++) {
        for (int j=0; j<k; j++) {
            cin>>v[i][j];
        }
        sort (v[i].begin() , v[i].end());
    }
    for (int i=0; i<k; i++) {
        for (int j=0; j<k; j++) {
            ll maks=max(v[0][i], v[1][j]);
            ll mi=min(v[0][i], v[1][j]);
            for (int m=2; m<n; m++) {
                ll a=-1e18,b=1e18,c=-1e18,d=1e18;
                auto o1=lower_bound(v[m].begin(), v[m].end(), maks);
                if (o1!=v[m].end()) {
                    b=*o1;
                }
                if (o1!=v[m].end() && *o1==maks) {
                    a=*o1;
                }
                else if (o1!=v[m].begin()) {
                    o1--;
                    a=*o1;
                }
                auto o2=lower_bound(v[m].begin(), v[m].end(), mi);
                if (o2!=v[m].end()) {
                    d=*o2;
                }
                if (o2!=v[m].end() && *o2==mi) {
                    c=*o2;
                }
                else if (o2!=v[m].begin()) {
                    o2--;
                    c=*o2;
                }
                if (a>=mi || d<=maks) {
                    continue;
                }
                ll cnt=min({abs(a-maks), abs(b-mi), abs(c-maks), abs(d-mi)});
                if (cnt==abs(a-maks)) {
                    mi=a;
                }
                else if (cnt==abs(b-mi)) {
                    maks=b;
                }
                else if (cnt==abs(c-maks)) {
                    mi=c;
                }
                else if (cnt==abs(d-mi)) {
                    maks=d;
                }
            }
            ans.insert(abs(maks-mi));
        }
    }
    auto o1=ans.begin();
    cout<<*o1;
}