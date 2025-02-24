#include <bits/stdc++.h>
using namespace std;

int main() {
    long long l , r;
    cin >> l >> r;
    vector<int>v;
    for (int i = l; i <= r; i++) {
        v.push_back(i);
    }
    for (int i = 0; i < v.size(); i++) {
        if (abs(v[i]) < 10) {
            cout << "Palindrome!" << endl;
        } else if (abs(v[i]) % 10 == 0) {
            cout << abs(v[i]) << endl;
        } else {
            int y = abs(v[i]);
            int h = 0;
            int digit = abs(v[i]) % 10;
            int k = h * 10 + digit;
            (v[i]) /= 10;
            if (k == abs(v[i])) {
                cout << "Palindrome!" << endl;
            } else {
                cout << y << endl;
            }
        }
    }
    return 0;
}


