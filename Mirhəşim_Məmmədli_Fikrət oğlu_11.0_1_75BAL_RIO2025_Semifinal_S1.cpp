#include <bits/stdc++.h>

using namespace std;

vector<int> ard;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long l, r;
    cin >> l >> r;
    int n = r - l + 1;
    for (long long i = l; i <= r; i++){
        ard.push_back(i);
    }
    int m = ard.size();
    for (long long j = 0; j < m; j++){
        int a, b, c;
        a = 0;
        c = 0;
        b = ard [j];
        while (b > 0){
            a = b % 10;
            c = c * 10 + a;
            b /=10;
        }
        if (ard[j] == c){
            cout << "Palindrome!"  << endl;
        } else {
            cout << ard[j] << endl;
        }

    }
    return 0;
}
