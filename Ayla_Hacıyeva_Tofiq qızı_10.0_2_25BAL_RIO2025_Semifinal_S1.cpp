#include <bits/stdc++.h>
using namespace std;

int main() {
    int l , r;
    cin >> l >> r;
    vector<int>v;
    for (int i = l; i <= r; i++) {
        v.push_back(i);
    }
    for (int i = 0; i < v.size(); i++) {
        if (v[i] >= 0) {
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
        } else {
            if (v[i] > -10) {
                cout << "Palindrome!" << endl;
            } else if (v[i] % 10 == 0) {
                cout << "Palindrome!" << endl;
            } else {
                int o = v[i];
                int p = 0;
                int d = v[i] % 10;
                int j = p * 10 + d;
                v[i] /= 10;
                if (j == v[i]) {
                    cout << "Palindrome!" << endl;
                } else {
                    cout << o << endl;
                }
            }
        }
    }
    return 0;
}
