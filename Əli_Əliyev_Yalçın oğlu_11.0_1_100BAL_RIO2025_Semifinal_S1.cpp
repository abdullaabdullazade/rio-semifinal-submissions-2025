#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;
bool is_palindrome(ll x)
{
    string s = to_string(x), b = s;
    reverse(b.begin(), b.end());
    return s == b;
}
void solve()
{
    ll l, r;
    cin >> l >> r;
    for (ll i = l; i <= r; i++) if (is_palindrome(i)) cout << "Palindrome!\n";
    else cout << i << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
//    cin >> t;
    for (ll cs = 1; cs <= t; cs++) solve();
}


