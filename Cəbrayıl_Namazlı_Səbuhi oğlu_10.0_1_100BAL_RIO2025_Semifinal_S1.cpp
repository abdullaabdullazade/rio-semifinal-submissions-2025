/// bunu izleyen sexs <3

#include <bits/stdc++.h>
using namespace std;

#define pii pair < int , int >
#define mp(a,b) make_pair(a,b)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/gcd(a,b)
#define int long long
#define fi first
#define se second

const int inf = 1e18;

bool is(int n) {
    if(n < 10) return true;

    string s = to_string(n);
    n = s.size();
    for(int i = 0;i < n/2;i++) {
        if(s[i] != s[n-i-1]) return false;

    }

    return true;
}

void solve() {
    int l,r; cin >> l >> r;
    for(int i = l;i <= r;i++) {
        if(is(i)) cout << "Palindrome!\n";
        else cout << i << "\n";
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1; //cin >> t;
    while(t--) solve();

}
