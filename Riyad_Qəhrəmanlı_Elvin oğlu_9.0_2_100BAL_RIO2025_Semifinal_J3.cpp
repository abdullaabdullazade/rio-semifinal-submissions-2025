#include "bits/stdc++.h"
using namespace std;

#define int long long
#define endl '\n'

const long long sz = 1505;
const long long inf = 1e18 + 9;
const long long mod = 1e9 + 7;

int r[sz], c[sz], a[sz][sz];

void solve() {
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			char x;
			cin >> x;
			a[i][j] = (x == '1');
		}
	}
	for (int i = 1; i <= n; i++) {
		int cur = 0;
		for (int j = 1; j <= m; j++) {
			cur += a[i][j];
		}
		r[i] = cur;
	}
    for (int j = 1; j <= m; j++) {
        int cur = 0;
        for (int i = 1; i <= n; i++) {
            cur += a[i][j];
        }
        c[j] = cur;
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (a[i][j] == 1) {
                if (r[i] == 1 and c[j] == 1) {
                    cnt++;
                } else if (r[i] == m and c[j] == n) {
                    cnt++;
                }
            } else {
                if (r[i] == 0 and c[j] == 0) {
                    cnt++;
                } else if (r[i] == m - 1 and c[j] == n - 1) {
                    cnt++;
                }
            }
        }
    }
    cout << cnt << endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int T = 1;
    // cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}