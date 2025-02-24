#include <iostream>
#include <string>
using namespace std;

// Funksiya: ?d?din palindrom olub olmadigini yoxlayir
bool isPalindrome(long long n) {
    string s = to_string(n); // ?d?di string? �eviririk
    int len = s.length();
    
    // Stringin baslangicini v? sonunu m�qayis? edirik
    for (int i = 0; i < len / 2; i++) {
        if (s[i] != s[len - i - 1]) {
            return false; // ?g?r he� bir b?rab?rlik tapilarsa, palindrom deyil
        }
    }
    return true; // ?ks halda palindromdur
}

int main() {
    long long l, r;
    cin >> l >> r;
    
    // l-d?n r-? q?d?r b�t�n ?d?dl?ri yoxlayiriq
    for (long long i = l; i <= r; i++) {
        if (isPalindrome(i)) {
            cout << "Palindrome!" << endl;
        } else {
            cout << i << endl;
        }
    }
    
    return 0;
}

