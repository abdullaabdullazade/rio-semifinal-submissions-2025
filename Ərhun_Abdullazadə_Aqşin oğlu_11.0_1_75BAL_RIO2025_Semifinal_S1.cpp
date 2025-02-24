#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    int l, r;

    cin >> l >> r;

    for (int i = l; i <= r; i++) {
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
