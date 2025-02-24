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
        vector<int>cnt2(n, 0);
        for(int j = m - 1; j > i; --j){
            res = min(res, v[j].first - v[i].first);
            cnt2[v[j].second]++;
            if(cnt[v[j].second] <= cnt2[v[j].second] ){
                break;
            }
        }
        cnt[v[i].second]--;
        if(cnt[v[i].second] == 0){
            break;
        }
    }
    cout << res << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int T = 1;
    while(T--){
        solve();
    }
}
