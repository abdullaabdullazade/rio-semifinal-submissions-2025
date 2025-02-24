#include <bits/stdc++.h>

#define int long long

using namespace std;

void solve(){
    string s; int d; cin >> s >> d;
    int n, m;
    n = ((s[0] - '0') * 10) + (s[1] - '0');
    m = ((s[3] - '0') * 10) + (s[4] - '0');
    m += d;
    n += m / 60;
    m %= 60;
    n %= 24;
    if (n / 10) cout << n;
    else cout << '0' << n;
    if (m / 10) cout << ':' << m;
    else cout << ":0" << m;
}

signed main(){
    int t = 1; cin >> t;
    while (t--)
    solve();
}
