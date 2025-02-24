#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n, cnt = 1;
    cin >> n;
    vector<pair<int, int> > v(n);
    vector<int> v2(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i].first;
        v2[i] = v[i].first;
    }
    sort(v2.begin(), v2.end());
    for(int i = 0; i < n; i++) {
        int l = 0, r = n - 1;
        while(l <= r) {
            int mid = (l + r) / 2;
            if(v[i].first == v2[mid]) {
                v[i].second = mid + 1;
                break;
            }
            else if(v[i].first > v2[mid]) {
                l = mid + 1;
            }
            else {
                r = mid - 1;
            }
        }
    }
    int l = 0, r = 1;
    while(l < n && r < n) {
        if(v[l].second + 1 != v[r].second && v[l].second - 1 != v[r].second) {
            cnt++;
        }
        l++; r++;
    }
    cout << cnt << endl;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
