#include <bits/stdc++.h>
using namespace std;
int main() {
    long long l, r;
    cin >> l >> r;

    for (long long i = l; i <= r; i++) {
        if (i < 10) {
            cout << "Palindrome!" << endl;
        }
        else {
            string s = to_string(i);
            long long f = 0, ls = s.size() - 1;
            int flag = 0;

            while (f < ls) {
                if (s[f] != s[ls]) {
                    cout << i << endl;
                    flag = 1;
                    break;
                }
                f++;
                ls--;
            }
            if (flag == 0) {
                cout << "Palindrome!" << endl;
            }
        }
    }
}
