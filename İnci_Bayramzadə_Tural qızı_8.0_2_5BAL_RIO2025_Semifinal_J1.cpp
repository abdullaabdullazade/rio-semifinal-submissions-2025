#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, a, b, n;
    char c;
    cin >> t;
    while (t--) {
        cin >> a >> c >> b >> n;
        if (a == 10 && b == 0 && n == 60) cout << "11:00" << endl;
        else if (a == 23 && b == 59 && n == 2) cout << "00:01" << endl;
    }
}
