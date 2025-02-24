#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        int a;
        cin >> s >> a;
        int cem = 0;
        cem += (s[0] - '0') * 600 + (s[1] - '0') * 60;
        cem += (s[3] - '0') * 10;
        cem += (s[4] - '0');
        cem += a;
        int saat = (cem / 60) % 24;
        int deq = cem % 60;
        if (saat < 10) {
            cout << 0 << saat << ':';
        }
        else {
            cout << saat << ':';
        }
        if (deq < 10) {
            cout << 0 << deq << '\n';
        }
        else {
            cout << deq << '\n';
        }
    }
    return 0;
}
