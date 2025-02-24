#include <bits/stdc++.h>
using namespace std;
bool isPalindrome (int num) {
    string s = to_string(num);
    return s == string(s.rbegin(),
s.rend());
}

int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int l,r;
    cin >> l >> r;
    for (int i=l; i<=r; i++){
            if (isPalindrome(i))
        cout <<"Palindrome!\n" ;
    else
        cout << i << "\n";
    }
return 0;
}
