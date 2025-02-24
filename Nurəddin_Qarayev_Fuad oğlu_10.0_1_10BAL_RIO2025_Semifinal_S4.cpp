//Bismillahirrahmanirahim 
// ibo orz, rashad m orz
// wcdeki su qaynar idi


#include <bits/stdc++.h>
using namespace std;
#define intt long long
#define fi first
#define se second
#define pb push_back
#define ALL(x) x.begin(), x.end()

const intt mxN = 1e5 + 5;
const intt inf = 1e18;
const intt mod = 1e9 + 7; // mind these

void solve() {
    intt n, k;
    cin >> n >> k;
    vector<vector<array<intt,3>>> dp(n + 1, vector<array<intt,3>>(k + 1, {0,0,0}));
    vector<vector<intt>> g(n + 1, vector<intt>(k + 1));
    for(intt i = 1; i <= n; i++) {
        for(intt j = 1; j <= k; j++) {
            cin >> g[i][j];
        }
        sort(ALL(g[i]));
    }
    for(intt i = 2; i <= n; i++) {
        for(intt j = 1; j <= k; j++) {
            for(intt l = 1; l <= k; l++) {
                dp[i][j] = {g[i][j], g[i][j], g[i][j]};
            }
        }
    }
    for(intt col = 1; col <= k; col++) {
        dp[1][col] = {g[1][col], g[1][col], g[1][col]};
    }

    for(intt i = 2; i <= n; i++) {
        for(intt j = 1; j <= k; j++) {
            array<intt,3> best = {g[i][j], g[i][j], inf};
            for(intt l = 1; l <= k; l++) {
                array<intt,3> cur = {g[i][j], g[i][j], inf};;
                cur[0] = min(cur[0], dp[i-1][l][0]);
                cur[1] = max(cur[1], dp[i-1][l][1]);
                cur[2] = cur[1] - cur[0];
                if(cur[2] < best[2]) {
                    best = cur;
                }
            }
            dp[i][j] = best;
        }
    }
    // for(intt i = 1; i <= n; i++) {
    //     for(intt j = 1; j <= k; j++) {
    //         cout << i << " " << j << ": " << dp[i][j][0] << " " << dp[i][j][1] << " " << dp[i][j][2] << endl;
    //     }
    // }
    intt ans = inf;
    for(intt j = 1; j <= k; j++) {
        ans = min(ans, dp[n][j][2]);
    }
    cout << ans << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    intt tst = 1;
    // cin >> tst;
    while(tst--) {
        solve();
    }
}
