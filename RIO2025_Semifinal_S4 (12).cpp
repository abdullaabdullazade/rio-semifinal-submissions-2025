#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int32_t main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, M;
    cin >> N >> M;
    vector<vector<ll>> arr(N);
    set<int> all2;
    for (int i = 0;i < N;i ++) {
        set<ll> alll;
        alll.insert(1e16);
        for (int j = 0;j < M;j ++) {
            int x;
            cin >> x;
            all2.insert(x);
            alll.insert(x);
        }
        for (auto v : alll) arr[i].push_back(v);
    }
    vector<int> all(all2.begin(), all2.end());
    // for (auto x : all) cout << x << "\n";

    ll res = 0, ans = 1e16 + 99;
    vector<int> index(N, 0);
    map<ll, vector<int>> mp;
    vector<int> tmp;
    for (int i = 0;i < all.size();i ++) {
        if (i == 0) {
            for (int j = 0;j < N;j ++) {
                while (arr[j][index[j]] < all[i]) index[j] ++;
                res = max(res, arr[j][index[j]] - all[i]);
                mp[arr[j][index[j]]].push_back(j);
            }
        } else {
            res -= (all[i] - all[i - 1]);
            while (mp.size() > 0 && mp.begin()->first < all[i]) {
                for (auto v : (mp.begin()->second)) {
                    tmp.push_back(v);
                }
                mp.erase(mp.begin());
            }
            while (tmp.size() > 0) {
                while (arr[tmp.back()][index[tmp.back()]] < all[i]) index[tmp.back()] ++;
                res = max(res, arr[tmp.back()][index[tmp.back()]] - all[i]);
                mp[arr[tmp.back()][index[tmp.back()]]].push_back(tmp.back());
                tmp.pop_back();
            }
        }
        if (res > 1e9) {
            break;
        }
        ans = min(ans, res);
    }
    cout << ans << "\n";

    return 0;
}
