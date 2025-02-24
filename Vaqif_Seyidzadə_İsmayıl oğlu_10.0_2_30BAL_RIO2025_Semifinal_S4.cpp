#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, k;
    cin >> n >> k;
    int a[n][k];
    vector<int>cnt(n, k);
    vector<pair<int,int>>v;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < k; ++j){
            cin >> a[i][j];
            v.push_back({a[i][j], i});
        }
    }
    sort(v.begin(), v.end());
    int res = LLONG_MAX;
    int m = v.size();
    for(int i = 0; i < m; ++i){
        int ans = n;
        cnt.assign(n, 0);
        for(int j = i; j < m; ++j){
            if(cnt[v[j].second] == 0){
                ans--;
            }
            cnt[v[j].second]++;
            if(ans == 0){
                res = min(res, v[j].first - v[i].first);
            }
        }
    }
    cout << res << endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    while(T--){
        solve();
    }
}
