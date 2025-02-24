#include <iostream>
#include <string>
using namespace std;


bool is_palindrome(long long num) {
    string s = to_string(num); // ədədi string-ə çeviririk
    int n = s.length();
    
    
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - i - 1]) {
            return false; 
        }
    }
    return true; 
}

int main() {
    long long l, r;
    cin >> l >> r; 
    
    for (long long num = l; num <= r; num++) {
        if (is_palindrome(num)) {
            cout << "Palindrome!" << endl; 
        } else {
            cout << num << endl; 
        }
    }

    return 0;
}
