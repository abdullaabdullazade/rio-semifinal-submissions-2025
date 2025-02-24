#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int a[n+3],sorted[n];
        a[0] = -1;
        a[n] = -1;
        map<int,pair<int,int>>mp;
        for (int i = 0; i<n; i++) {
            cin>>a[i];
            sorted[i] = a[i];
        }
        mp[a[0]] = {-1,a[1]};
        for (int i = 1; i<n; i++) {
            mp[a[i]] = {a[i-1], a[i+1]};
        }
        sort(sorted, sorted+n);
        int cnt = 1;
        for (int i = 0; i<n-1; i++) {
            if (sorted[i]!=mp[sorted[i+1]].first && sorted[i]!=mp[sorted[i+1]].second) cnt++;
        }
        cout<<cnt<<endl;
    }
}
