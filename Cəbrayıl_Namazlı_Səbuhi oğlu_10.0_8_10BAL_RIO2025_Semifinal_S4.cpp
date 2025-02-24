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

vector < vector < int > > v(sz, vector<int>(sz));

void dfs(int gr, int maxi, int mini) {
  //  cout << gr << ":\n";
    if(gr == 0) {
        int res = maxi - mini;
        ans = min(ans, res);
        return;
    }


    int l1, l2;
    l2 = upper_bound(v[gr].begin()+1, v[gr].begin()+k+1, mini) - v[gr].begin();
    l1 = l2-1;

    int res1 = inf, val1 = v[gr][l1], val2 = v[gr][l2];

  //  cout << l1 << " " << l2 << " -> " << val1 << " " << val2 << "\n\n";
    int mn1, mx1;
    if(val1 != inf) {
        if(val1 < mini) {
            res1 = maxi - val1;
            mx1 = maxi;
            mn1 = val1;
        }
        else {
            res1 = maxi-mini;
            mx1 = maxi;
            mn1 = mini;
        }

       // cout << mn1 << " " << mx1 << " A\n";
    }
    if(val2 != inf) {
        if(val2 > maxi && val2-mini <= res1) {
            res1 = val2 - mini;
            mx1 = val2;
            mn1 = mini;
        }
        else if(val2 <= maxi && maxi - mini <= res1) {
            res1 = maxi - mini;
            mx1 = maxi;
            mn1 = mini;
        }

       // cout << mn1 << " " << mx1 << " B\n";
    }

    l2 = upper_bound(v[gr].begin()+1, v[gr].begin()+k+1, maxi) - v[gr].begin();
    l1 = l2-1;
    val1 = v[gr][l1], val2 = v[gr][l2];

   // cout << l1 << " " << l2 << " -> " << val1 << " " << val2 << "\n\n";

    int res2 = inf;
    int mn2, mx2;
    if(val1 != inf) {
        if(val1 < mini) {
            res2 = maxi - val1;
            mx2 = maxi;
            mn2 = val1;
        }
        else {
            res2 = maxi-mini;
            mx2 = maxi;
            mn2 = mini;
        }

       // cout << mn2 << " " << mx2 << " C\n";
    }
    if(val2 != inf) {
        if(val2 > maxi && val2-mini <= res2) {
            res2 = val2 - mini;
            mx2 = val2;
            mn2 = mini;
        }
        else if(val2 <= maxi && maxi - mini <= res2) {
            res2 = maxi - mini;
            mx2 = maxi;
            mn2 = mini;
        }

       // cout << mn2 << " " << mx2 << " D\n";
    }

    if(res1 < res2) {
      //  cout << gr << " --> " << mx1 << " , " << mn1 << "\n\n";
        dfs(gr-1, mx1, mn1);
    }
    else {
      //  cout << gr << " --> " << mx2 << " , " << mn2 << "\n\n";
        dfs(gr-1, mx2, mn2);
    }


}

void solve() {
    cin >> n >> k;
    for(int i = 1;i <= n;i++) {
        for(int j = 1;j <= k;j++) {
            cin >> v[i][j];
        }
        sort(v[i].begin()+1, v[i].begin()+k+1);
        v[i][0] = inf;
        v[i][k+1] = inf;
    }

    for(int i = 1;i <= k;i++) {
       dfs(n-1,v[n][i],v[n][i]);
      // cout << "\n\n\n";
    }

    cout << ans << "\n";
}

signed main() {
    ios_base::sync_with_stdio(0);
    cout.tie(0);

    int t=1; //cin >> t;
    while(t--) solve();
}
