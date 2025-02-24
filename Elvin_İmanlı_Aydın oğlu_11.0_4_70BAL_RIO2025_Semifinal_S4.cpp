#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int32_t main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

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
    set<array<int, 2>> s;
    for (int i = 0;i < all.size() && ans > 0;i ++) {
        bool as = true;
        if (i == 0) {
            for (int j = 0;j < N;j ++) {
                while (index[j] < arr[j].size() && arr[j][index[j]] < all[i]) index[j] ++;
                if (index[j] == arr[j].size()) {
                    as = false;
                    break;
                }
                res = max(res, arr[j][index[j]] - all[i]);
                s.insert({arr[j][index[j]], j});
            }
        } else {
            res -= (all[i] - all[i - 1]);
            while ((*s.begin())[0] < all[i]) {
                while (index[(*s.begin())[1]] < arr[(*s.begin())[1]].size() && arr[(*s.begin())[1]][index[(*s.begin())[1]]] < all[i]) index[(*s.begin())[1]] ++;
                if (index[(*s.begin())[1]] == arr[(*s.begin())[1]].size()) {
                    as = false;
                    break;
                }
                res = max(res, arr[(*s.begin())[1]][index[(*s.begin())[1]]] - all[i]);
                s.insert({arr[(*s.begin())[1]][index[(*s.begin())[1]]], (*s.begin())[1]});
                s.erase(s.begin());
            }
        }
        if (as == false) {
            break;
        }
        ans = min(ans, res);
    }
    cout << ans << "\n";

    return 0;
}
