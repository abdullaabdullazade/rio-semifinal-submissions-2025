#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, k;
    cin >> n >> k;
    if(n == 2){
        vector<int>a(k), b(k);
        for(int &i : a){
            cin >> i;
        }
        for(int &i : b){
            cin >> i;
        }
        int ans = INT_MAX;
        for(int i = 0; i < a.size(); ++i){
            for(int j = 0; j < b.size(); ++j){
                ans = min(ans, max(a[i], b[j]) - min(a[i], b[j]));
            }
        }
        cout << ans << endl;
        return;
    }
    vector<pair<int,int>>v;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < k; ++j){
            int x;
            cin >> x;
            v.push_back({x, i});
        }
    }
    vector<int>cnt(n, k);
    sort(v.begin(), v.end());
    int id1 = -1, id2 = -1;
    for(int i = 0; i < n * k; ++i){
        cnt[v[i].second]--;
        if(cnt[v[i].second] == 0){
            id1 = i;
            break;
        }
    }
    cnt.assign(n, k);
    for(int j = n * k - 1; j > -1; --j){
        cnt[v[j].second]--;
        if(cnt[v[j].second] == 0){
            id2 = j;
            break;
        }
    }
    if(id2 > id1){
        cout << v[id2].first - v[id1].first << endl;
        return;
    }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T = 1;
    while(T--){
        solve();
    }
}
