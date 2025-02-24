#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int32_t main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, M;
    cin >> N >> M;
    vector<set<ll>> arr(N);
    set<int> all2;
    for (int i = 0;i < N;i ++) {
        arr[i].insert(1e16);
        for (int j = 0;j < M;j ++) {
            int x;
            cin >> x;
            all2.insert(x);
            arr[i].insert(x);
        }
    }
    vector<int> all(all2.begin(), all2.end());
    // for (auto x : all) cout << x << "\n";

    ll res = 0, ans = 1e16 + 99;
    map<ll, vector<int>> mp;
    for (int i = 0;i < all.size();i ++) {
        if (i == 0) {
            for (int j = 0;j < N;j ++) {
                res = max(res, *arr[j].lower_bound(all[i]) - all[i]);
                mp[*arr[j].lower_bound(all[i])].push_back(j);
            }
        } else {
            res -= (all[i] - all[i - 1]);
            while (mp.begin()->first < all[i]) {
                while ((mp.begin()->second).size() > 0) {
                    res = max(res, *arr[(mp.begin()->second).back()].lower_bound(all[i]) - all[i]);
                    mp[*arr[(mp.begin()->second).back()].lower_bound(all[i])].push_back((mp.begin()->second).back());
                    (mp.begin()->second).pop_back();
                }
                mp.erase(mp.begin());
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
