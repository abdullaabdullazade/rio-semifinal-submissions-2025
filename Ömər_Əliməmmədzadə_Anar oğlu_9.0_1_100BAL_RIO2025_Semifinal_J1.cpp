#include <bits/stdc++.h>
// #define int int64_t
using namespace std;

signed main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        int d;
        cin >> a >> d;
        int h = stoi(a.substr(0, 2)), m = stoi(a.substr(3, 2));
        int n = h * 60 + m + d;
        h = n / 60, m = n % 60;
        h %= 24;
        if (h < 10) cout << 0;
        cout << h << ':';
        if (m < 10) cout << 0;
        cout << m << '\n';
    }
}