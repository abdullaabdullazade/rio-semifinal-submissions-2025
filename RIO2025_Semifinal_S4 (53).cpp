#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,k;
    cin>>n>>k;
    vector <vector<ll>> v (n, vector<ll> (k));
    for (int i=0; i<n; i++) {
        for (int j=0; j<k; j++) {
            cin>>v[i][j];
        }
        sort (v[i].begin(), v[i].end());
    }
    ll ans=1e18;
    for (int i=0; i<k; i++) {
        for (int j=0; j<k; j++) {
            ll maks=max(v[0][i], v[1][j]);
            ll mi=min(v[0][i], v[1][j]);
            for (int m=2; m<n; m++) {
                ll l=0, r=k-1, best=1e18, bestnum;
                while (l<r && best>=0) {
                    ll mid=(l+r)/2;
                    if (v[m][mid]>=mi && v[m][mid]<=maks) {
                        best=-1;
                        bestnum=-1;
                    }
                    else if (v[m][mid]<mi) {
                        if (maks-v[m][mid]<=best) {
                            best=maks-v[m][mid];
                            bestnum=v[m][mid];
                        }
                        l=mid+1;
                    }
                    else if (v[m][mid]>maks) {
                        if (v[m][mid]-mi<=best) {
                            best=v[m][mid]-mi;
                            bestnum=v[m][mid];
                        }
                        r=mid;
                    }
                }
                if (best==-1) {
                    continue;
                }
                else {
                    if (bestnum>maks) {
                        maks=bestnum;
                    }
                    else {
                        mi=bestnum;
                    }
                }
                if (maks-mi>ans) {
                    break;
                }
            }
            ans=min(ans, abs(maks-mi));
        }
    }
    cout<<ans;
}