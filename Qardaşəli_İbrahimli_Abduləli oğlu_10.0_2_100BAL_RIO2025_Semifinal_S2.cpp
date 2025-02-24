#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, ans = 1;
    cin >> n;
    vector<pair<int, int> > v1(n);
    vector<int> v2;
    for(int i = 0; i < n; i++) {
        cin >> v1[i].first;
        v2.push_back(v1[i].first);
    }
    sort(v2.begin(), v2.end());
    for(int i = 0; i < n; i++) {
        int l = 0, r = n - 1;
        while(l <= r) {
            int mid = (l + r) / 2;
            if(v1[i].first == v2[mid]) {
                v1[i].second = mid + 1;
                break;
            }
            else if(v1[i].first > v2[mid]) {
                l = mid + 1;
            }
            else {
                r = mid - 1;
            }
        }
    }
    int l = 0, r = 1;
    while(l < n && r < n) {
        if(abs(v1[l].second - v1[r].second) != 1) {
            ans++;
        }
        l++; r++;
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
}