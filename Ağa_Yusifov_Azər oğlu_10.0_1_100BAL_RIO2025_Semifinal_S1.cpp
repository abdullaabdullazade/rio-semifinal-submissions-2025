#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isPalindrome(long long n) {
    string s = to_string(n);
    string rev_s = s;
    reverse(rev_s.begin(), rev_s.end());
    return s == rev_s;
}

int main() {
    long long l, r;
    cin >> l >> r;

    for (long long i = l; i <= r; i++) {
        if (isPalindrome(i)) {
            cout << "Palindrome!" << endl;
        } else {
            cout << i << endl;
        }
    }

    return 0;
}
