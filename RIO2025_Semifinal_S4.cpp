#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,k;
    cin>>n>>k;
    int a[n+1][k+1];
    pair<int,int> dp[n+1][k+1];
    for (int i = 1; i<=n; i++) {
        for (int j = 1; j<=k; j++) {
            cin>>a[i][j];
        }
    }
    for (int i = 1; i<=k; i++) dp[1][i] = {a[1][i],a[1][i]};

    for (int i = 2; i<=n; i++) {
        for (int j = 1; j<=k; j++) {
            dp[i][j] = {1,1000000000};
            for (int z = 1; z<=k; z++) {
                if (dp[i][j].second-dp[i][j].first>max(dp[i-1][z].second,a[i][j])-min(dp[i-1][z].first,a[i][j])) {
                    dp[i][j] = {min(dp[i-1][z].first,a[i][j]), max(dp[i-1][z].second,a[i][j])};
                }
            }
        }
    }
    int mini = 100000000000000;
    for (int i = 1; i<=k; i++) mini = min(mini,dp[n][i].second-dp[n][i].first);
    cout<<mini;
}
