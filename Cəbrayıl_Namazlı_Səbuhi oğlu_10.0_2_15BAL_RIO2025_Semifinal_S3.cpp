#include <bits/stdc++.h>
using namespace std;

#define pii pair < int , int >
#define mp(a,b) make_pair(a,b)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/gcd(a,b)
#define int long long
#define fi first
#define se second

void solve() {
    int n; cin >> n;
    vector < int > a(n), b(n);

    for(auto &p : a) cin >> p;

    b[n-1] = abs(a[n-1] - a[0]);
    for(int i = 0;i < n-1;i++) {
        b[i] = abs(a[i] - a[i+1]);
    }

    for(int i = 0;i < (1<<n);i++) {
        int sum1 = 0, sum2 = 0 , cnt = 0;
        vector < int > ans;
        for(int j = 0;j < n;j++) {
            if(i&(1<<j)) {
                sum1 += b[j];
                ans.push_back(j+1);
            }
            else {
                sum2 += b[j];
                cnt++;
            }
        }

        if(sum1 == sum2 && cnt > 0 && ans.size() > 0) {
            cout << ans.size() << "\n";
            for(auto &p : ans) cout << p << " ";
            cout << "\n";

            return;
        }
    }

    cout << "-1\n";
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1; cin >> t;
    while(t--) solve();

}
