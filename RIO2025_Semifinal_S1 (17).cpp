#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool check (ll x) {
    string t1 = to_string(x);
    string t2 = t1;
    reverse(t2.begin(), t2.end());
    return t1 == t2;
}

int32_t main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll l, r;
    cin >> l >> r;
    for (int i = l;i <= r;i ++) {
        if (check(i)) cout << "Palindrome!\n";
        else cout << i << "\n";
    }

    return 0;
}
