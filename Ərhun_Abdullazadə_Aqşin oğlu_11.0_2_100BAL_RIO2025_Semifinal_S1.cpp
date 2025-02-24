#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll l, r;

    cin >> l >> r;

    for (ll i = l; i <= r; i++) {
        string t = to_string(i);

        string rt = t;

        reverse(rt.begin(), rt.end());

        if (t == rt) {
            cout << "Palindrome!" << endl;
        }
        else {
            cout << i << endl;
        }
    }

    return 0;
}
