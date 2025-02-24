#include <bits/stdc++.h>
using namespace std;

#define pii pair < int , int >
#define mp(a,b) make_pair(a,b)
#define int long long
#define fi first
#define se second

const int inf = 1e18;
const int sz = 1003;
int n,k, ans = inf;

vector < vector < int > > v(sz, vector < int >(sz));

void dfs(int gr, int maxi, int mini) {
    if(gr == 0) {
        ans = min(ans, maxi - mini);
        return;
    }

    int l = 1, r = k, res = inf;
    int mn = mini, mx = maxi;

    while(l <= r) {
        int mid = (r+l)/2;
        int val = v[gr][mid];

        if(val > maxi) {
            if(val - mini < res) {
                res = val - mini;
                mx = val;
                mn = mini;
            }

            r = mid-1;
        }
        else {
            if(maxi - val < res) {
                res = maxi - val;
                mx = maxi;
                mn = val;
            }

            l = mid+1;
        }
    }

    dfs(gr-1, mx, mn);
}

void solve() {
    cin >> n >> k;
    for(int i = 1;i <= n;i++) {
        for(int j = 1;j <= k;j++) {
            cin >> v[i][j];
        }

        sort(v[i].begin()+1, v[i].begin()+k+1);
    }

    for(int i = 1;i <= k;i++) dfs(n-1,v[n][i],v[n][i]);
    cout << ans << "\n";
}

signed main() {
    ios_base::sync_with_stdio(0);
    cout.tie(0);

    int t = 1; //cin >> t;
    while(t--) solve();
}
