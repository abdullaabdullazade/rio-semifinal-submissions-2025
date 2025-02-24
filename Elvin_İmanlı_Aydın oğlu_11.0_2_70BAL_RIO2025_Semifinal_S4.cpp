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
    // map<ll, vector<int>> mp;
    set<array<ll, 2>> s;
    for (int i = 0;i < all.size();i ++) {
        if (i == 0) {
            for (int j = 0;j < N;j ++) {
                while (arr[j][index[j]] < all[i]) index[j] ++;
                res = max(res, arr[j][index[j]] - all[i]);
                s.insert({arr[j][index[j]], j});
            }
        } else {
            res -= (all[i] - all[i - 1]);
            while ((*s.begin())[0] < all[i]) {
                while (arr[(*s.begin())[1]][index[(*s.begin())[1]]] < all[i]) index[(*s.begin())[1]] ++;
                res = max(res, arr[(*s.begin())[1]][index[(*s.begin())[1]]] - all[i]);
                s.insert({arr[(*s.begin())[1]][index[(*s.begin())[1]]], (*s.begin())[1]});
                s.erase(s.begin());
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
