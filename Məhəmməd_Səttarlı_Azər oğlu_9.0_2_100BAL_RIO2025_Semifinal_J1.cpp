#include <bits/stdc++.h>
using namespace std;

int n, countWays;
vector<int> a, b;

void backtrack(int index, vector<bool>&used) {
    if(index == n) {
            countWays++;
    return;
    }
    for (int i = 0; i < n; i++) {
            if(!used[i] && a[i]>=b[index]) {
                    used[i] = true;
            backtrack(index + 1, used);
            used[i] = false;
            }
    }
}
void solve() {
    cin >> n;
    a.resize(n);
    b.resize(n);

    for (int i = 0; i < n; i++)cin >> a[i];
    for ( int i = 0; i < n; i++)cin>>b[i];

    sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        countWays = 0;
        vector<bool> used(n, false);
        backtrack(0, used);
        cout << countWays << '\n';
}
int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
            solve();
    }
    return 0;
}

