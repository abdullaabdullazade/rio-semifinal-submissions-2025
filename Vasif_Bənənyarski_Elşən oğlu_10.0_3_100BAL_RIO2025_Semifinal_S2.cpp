#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

void solve() {
    int n, c=1; cin >> n; vector<int> a(n); for(auto &i : a) cin >> i;
    vector<int> b=a; map<int,int> m; sort(b.begin(),b.end());
    for(int i=0;i<n;i++){
        m[b[i]]=i;
    }
    for(int i=0;i<n-1;i++){
        if(abs(m[a[i]]-m[a[i+1]])!=1) c++;
    } cout << c << '\n';
}
signed main() {
    fastio;
    int t = 1; cin >> t;
    while (t--) solve();
    return 0;
}
