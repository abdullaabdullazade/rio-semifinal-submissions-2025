#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long b[n];
    long long tsum = 0;

    for (int i = 0; i < n - 1; i++) {
        b[i] = abs(a[i + 1] - a[i]);
        tsum += b[i];
    }

    b[n - 1] = abs(a[0] - a[n - 1]);
    tsum += b[n - 1];

    for (long long mask = 1; mask <= (1<<n); mask++) {
        long long sum = 0;
        vector <int> ans;
        for (int i = 0; i < n; i++) {
            if (((mask>>i) & 1)) {
                sum += b[i];
                ans.push_back(i + 1);
            }
        }
        if (sum == tsum - sum) {
            cout << ans.size() << endl;
            for (int j = 0; j < ans.size(); j++) {
                cout << ans[j] << " ";
            }
            cout << endl;
            ans.clear();
            return;
        }
    }
    cout << -1 << endl;
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        solve();
    }
}
