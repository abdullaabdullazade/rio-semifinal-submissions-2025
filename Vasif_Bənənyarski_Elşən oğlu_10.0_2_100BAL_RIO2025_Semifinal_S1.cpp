#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

void solve() {
    int l, r; cin >> l >> r;
    for(int i=l;i<=r;i++){
        string s=to_string(i),s1=s;
        reverse(s.begin(),s.end());
        if(s==s1) cout << "Palindrome!\n";
        else cout << i << '\n';
    }
}
signed main() {
    fastio;
    int t = 1;
    while (t--) solve();
    return 0;
}
