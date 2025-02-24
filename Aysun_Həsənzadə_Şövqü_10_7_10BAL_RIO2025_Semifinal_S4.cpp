#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

const int sz = 2e5 + 5;

int a[sz];
vector<int>v[sz];

void solve(){
    int n, k; cin >> n >> k;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= k; j++){
            int q; cin >> q;
            v[i].push_back(q);
        }
        sort(v[i].begin(), v[i].end());
    }
    int mn = 2e9;
    for(int i = 0; i < k; i++){
        int isci = v[1][i];
        int mx = -2e9;
        for(int j = 1; j <= n; j++){
            int ans = 2e9;
            auto idx = lower_bound(v[j].begin(), v[j].end(), isci);
            if(idx != v[j].end()) ans = min(ans, abs(*idx - isci));
            idx--; ans = min(ans, abs(*idx - isci));
            mx = max(mx, ans);
        }
        mn = min(mn, mx);
    }
    cout << mn;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
}
