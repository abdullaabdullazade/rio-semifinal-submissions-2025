#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Palindrom olub-olmadığını yoxlayan funksiya
bool isPalindrome(long long num) {
    string s = to_string(num);
    string rev_s = s;
    reverse(rev_s.begin(), rev_s.end());  // String-i tərsinə çeviririk
    return s == rev_s;  // Əgər eynidirsə, palindromdur
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
