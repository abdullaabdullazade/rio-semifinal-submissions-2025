#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

const int sz = 1e5 + 5;

int a[sz], b[sz];

void solve(){
    int n; cin >> n;
    map<int, int>mp;
    for(int i = 1; i <= n; i++){
        cin >> a[i]; b[i] = a[i];
    }
    sort(b + 1, b + n + 1);
    for(int i = 1; i <= n; i++) mp[b[i]] = i;
    int ans = 0;
    for(int i = 2; i <= n; i++){
        if(abs(mp[a[i]] - mp[a[i-1]]) != 1) ans++;
    }
    cout << ans + 1 << '\n';
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
}
