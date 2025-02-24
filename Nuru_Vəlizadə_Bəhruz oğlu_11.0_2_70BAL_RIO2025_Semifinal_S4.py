#include <iostream>
#include <string>
using namespace std;

// Palindrom olub olmadığını yoxlayan funksiya
bool is_palindrome(long long num) {
    string s = to_string(num); // ədədi string-ə çeviririk
    int n = s.length();
    
    // String-in ilk yarısını son yarısı ilə müqayisə edirik
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - i - 1]) {
            return false; // Əgər fərqlilik varsa, palindrom deyil
        }
    }
    return true; // Əgər heç bir fərqlilik yoxdursa, palindromdur
}

int main() {
    long long l, r;
    cin >> l >> r; // Girişdən l və r ədədlərini oxuyuruq
    
    for (long long num = l; num <= r; num++) {
        if (is_palindrome(num)) {
            cout << "Palindrome!" << endl; // Palindrom ədəd olduğu halda
        } else {
            cout << num << endl; // Əgər palindrom deyilsə, ədədi çap edirik
        }
    }

    return 0;
}
