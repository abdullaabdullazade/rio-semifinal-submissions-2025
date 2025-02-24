#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    int t;
    cin >> t;
    while (t--) {
        int n, c = 0, c1 = 0;
        std::cin >> n;
        int arr[n], b[n];
        bool fl = false;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (i) {
                b[i - 1] = arr[i] - arr[i - 1];
                if (b[i - 1] != 0) {
                    fl = true;
                }
                c1 += b[i - 1];
            }
        }
        b[n - 1] = arr[0] - arr[n - 1];
        if (b[n - 1] != 0) {
                    fl = true;
                }
                if (!fl) {
                    cout << 1 << '\n' << 1 << '\n';
                    continue;
                }
        c1 += b[n - 1];
        if (c1) {
            cout << -1 << '\n';
            continue;
        }
        for (int i = 0; i < n; i++) {
            if (b[i] > 0) {
                c++;
            }
        }
        cout << c << '\n';
        for (int i = 0; i < n; i++) {
            if (b[i] > 0) {
                cout << i + 1 << ' ';
            }
        }
        cout << '\n';
    }
    return 0;
}
