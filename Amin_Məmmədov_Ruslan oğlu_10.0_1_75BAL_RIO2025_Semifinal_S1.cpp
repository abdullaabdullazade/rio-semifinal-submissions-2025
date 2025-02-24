#include <bits/stdc++.h>
using namespace std;

#define int long long

const int sz = 2e5 + 5;
const int inf = 1e18;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int l, r;
    cin >> l >> r;
    for (int i = l; i <= r; i++)
    {
        string s = to_string(i);
        string t = s;
        reverse(t.begin(), t.end());
        if (s == t) cout << "Palindrome!" << endl;
        else cout << i << endl;
    }
}
