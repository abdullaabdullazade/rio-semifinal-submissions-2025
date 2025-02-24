#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(long long n) {
    string s = to_string(n);  
    int len = s.length();
    for (int i = 0; i < len / 2; ++i) {
        if (s[i] != s[len - 1 - i]) { 
            return false;
        }
    }
    return true;
}

int main() {
    long long l, r;
    cin >> l >> r;  

    for (long long i = l; i <= r; ++i) {
        if (isPalindrome(i)) {
            cout << "Palindrome!" << endl;  
        } else {
            cout << i << endl;  
        }
    }

    return 0;
}
