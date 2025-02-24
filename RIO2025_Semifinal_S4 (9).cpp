#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int32_t main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // O (N * M * log2(N));
    int N, M;
    cin >> N >> M;
    vector<vector<int>> arr(N);
    set<int> all2;
    for (int i = 0;i < N;i ++) {
        set<int> alll;
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

    int res = 0, ans = 1e9 + 99;
    vector<int> index(N, 0);
    // map<ll, vector<int>> mp;
    // set<array<int, 2>> s;
    priority_queue<array<int, 2>, vector<array<int, 2>>, greater<array<int, 2>>> pq;
    bool as = true;
    for (int i = 0;i < all.size() && ans > 0;i ++) {
        if (i == 0) {
            for (int j = 0;j < N;j ++) {
                while (index[j] < arr[j].size() && arr[j][index[j]] < all[i]) index[j] ++;
                if (index[j] == arr[j].size()) {
                    as = false;
                    break;
                }
                res = max(res, arr[j][index[j]] - all[i]);
                // s.insert({arr[j][index[j]], j});
                pq.push({arr[j][index[j]], j});
            }
        } else {
            res -= (all[i] - all[i - 1]);
            /* while ((s.begin())[0] < all[i]) {
                auto [it1, it2] = (*s.begin());
                while (index[it2] < arr[it2].size() && arr[it2][index[it2]] < all[i]) index[it2] ++;
                if (index[it2] == arr[it2].size()) {
                    as = false;
                    break;
                }
                res = max(res, arr[it2][index[it2]] - all[i]);
                s.insert({arr[it2][index[it2]], it2});
                s.erase(s.begin());
            } */
            while (pq.top()[0] < all[i]) {
                auto [it1, it2] = (pq.top());
                while (index[it2] < arr[it2].size() && arr[it2][index[it2]] < all[i]) index[it2] ++;
                if (index[it2] == arr[it2].size()) {
                    as = false;
                    break;
                }
                res = max(res, arr[it2][index[it2]] - all[i]);
                pq.push({arr[it2][index[it2]], it2});
                pq.pop();
            }
        }
        assert (pq.size() == N);
        if (as == false) {
            break;
        }
        ans = min(ans, res);
    }
    cout << ans << "\n";

    return 0;
}
