#include <iostream>

using namespace std;

long pal(long a){
    string s=to_string(a);
    string c;
    copy(s.rbegin(), s.rend(), back_inserter(c));
    if (s==c) return 1;
    return 0;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    long l, r; cin >> l >> r;
    while (l<=r){
        if (pal(l)) cout << "Palindrome!" << '\n';
        else cout << l << '\n';
        l++;
    }
    
}
