#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MOD = 1e9 + 7;

string func() {
    int n; cin >> n; vector<int> a(n), b(n);
    for (int& x : a) {
        cin >> x;
    }
    for (int& x : b) {
        cin >> x;
    }
    sort(a.rbegin(), a.rend());
    sort(b.rbegin(), b.rend());
    long long res = 1; int j = 0;
    for (int i = 0; i < n; i++) {
        int b_i = b[i];
        while (j < n && a[j] >= b_i) {
            j++;
        }
        int cnt = (j - i);
        if (cnt <= 0) {
            return "0\n";
        }
        res = res * cnt % MOD;
    }
    return to_string(res) + "\n";
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; string ans = "";
    while (t--) {
        ans += func();
    }
    cout << ans;
    return 0;
}
