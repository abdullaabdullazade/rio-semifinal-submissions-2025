#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;
#define dune ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define rep(i,a,b) for(int i=a; i<b; i++)
#define int long long
#define double long double
#define vc vector<int>
#define vpc vector<pair<int,int>>
#define pb push_back
#define ff first
#define ss second
#define all(x) x.begin(),x.end()
signed main() {
    dune;
    int n,k;
    cin >> n >> k;
    vc v(k),vec(k),vv;
    rep(i,0,k)
        cin >> v[i];
    rep(i,0,k)
        cin >> vec[i];
    sort(all(v));
    sort(all(vec));
    rep(i,0,k) {
        rep(j,0,k)
            vv.pb(abs(v[i]-vec[j]));
    }
    sort(all(vv));
    rep(i,0,vv.size()) {
        if(vv[i]>=0) {
            cout << vv[i] << ' ';
            return 0;
        }
    }
}
