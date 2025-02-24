#include <bits/stdc++.h>

int main() {
    int n, k, _min = 1e9;
    std::cin >> n >> k;
    int arr[n][k];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            std::cin >> arr[i][j];
        }
    }
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < k; j++) {
            _min = std::min(_min, abs(arr[0][i] - arr[1][j]));
        }
    }
    std::cout << _min;
    return 0;
}
