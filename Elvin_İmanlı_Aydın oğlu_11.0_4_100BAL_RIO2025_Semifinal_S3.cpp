#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void test_case () {
    int N;
    cin >> N;
    vector<int> arr(N);
    map<int, int> val;
    for (int i = 0;i < N;i ++) {
        cin >> arr[i];
        val[arr[i]];
    }
    int ind = 0;
    for (auto &[u, v] : val) {
        v = ind ++;
    }
    set<array<int, 2>> s;
    for (int i = 0;i < N;i ++) {
        arr[i] = val[arr[i]];
        // cout << x << " ";
        s.insert({arr[i], i});
    }

    vector<int> used(N, 0);
    int say = 0;
    while (s.size() > 0) {
        auto [x, ind] = *s.begin();
        s.erase(s.begin());
        if (used[ind] == 1) continue;
        say ++;
        for (int i = ind - 1;i >= 0;i --) {
            if (arr[ind] + ind - i != arr[i]) break;
            used[i] ++;
        }
        for (int i = ind + 1;i < N;i ++) {
            if (arr[ind] - ind + i != arr[i]) break;
            used[i] ++;
        }
        used[ind] ++;
    }
    cout << say << "\n";
}

int32_t main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;
    while (T --) {
        test_case();
    }

    return 0;
}
