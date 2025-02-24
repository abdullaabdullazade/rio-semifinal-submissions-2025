#include <bits/stdc++.h>
using namespace std;
bool isp(string s) {
    for (int i = 0; i < s.size() / 2; i++) {
        if (s[i] != s[s.size() - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    long long l, r;
    std::cin >> l >> r;
    for (; l <= r; l++) {
        string s = to_string(l);
        if (isp(s)) {
            cout << "Palindrome!\n";
        }
        else {
            cout << s << '\n';
        }
    }
    return 0;
}
