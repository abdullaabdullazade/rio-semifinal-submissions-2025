#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;


    int a[k];
    int b[k];

    for (int i = 0; i < k; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < k; i++) {
        cin >> b[i];
    }

    int mn = (int)1e9 + 1;
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < k; j++) {
            mn = min(mn, abs(a[i] - b[j]));
        }
    }

    cout << mn;
}
