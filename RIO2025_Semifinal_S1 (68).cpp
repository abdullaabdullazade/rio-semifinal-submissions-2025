#include <bits/stdc++.h>
using namespace std;

int main() {
    long long l , r;
    cin >> l >> r;
    vector<int>v;
    for (int i = abs(l); i <= abs(r); i++) {
        v.push_back(i);
    }
    for (int i = 0; i < v.size(); i++) {
        if (v[i] < 10) {
            cout << "Palindrome!" << endl;
        } else if (v[i] % 10 == 0) {
            cout << v[i] << endl;
        } else {
            int y = v[i];
            int h = 0;
            int digit = v[i] % 10;
            int k = h * 10 + digit;
            v[i] /= 10;
            if (k == v[i]) {
                cout << "Palindrome!" << endl;
            } else {
                cout << y << endl;
            }
        }
    }
    return 0;
}

