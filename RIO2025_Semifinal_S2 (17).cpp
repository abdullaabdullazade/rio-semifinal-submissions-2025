#include <bits/stdc++.h>
#define lb lower_bound
using namespace std;

void solve()
{
    int n, ans = 1;
    cin >> n;
    vector<pair<int, int> > v(n);
    vector<int> v2;
    for(int i = 0; i < n; i++) {
        cin >> v[i].first;
        v2.push_back(v[i].first);
    }
    sort(v2.begin(), v2.end());
    for(int i = 0; i < n; i++) {
        v[i].second = lb(v2.begin(), v2.end(), v[i].first) - v2.begin();
    }
    for(int i = 0; i < n - 1; i++) {
        if(abs(v[i].second - v[i + 1].second) != 1) {
            ans++;
        }
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tt;
    cin >> tt;
    while(tt--) {
        solve();
    }
    return 0;
}