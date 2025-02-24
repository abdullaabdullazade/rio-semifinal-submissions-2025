#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        int arr[n], sorted[n];
        for (int i = 0; i < n; i++) {
            std::cin >> arr[i];
            sorted[i] = arr[i];
        }
        if (n == 1) {
            cout << 1 << '\n';
            continue;
        }
        sort(sorted, sorted + n);
        map<int, std::vector<int>> mp;
        mp[sorted[0]].push_back(sorted[1]);
        mp[sorted[n - 1]].push_back(sorted[n - 2]);
        for (int i = 1; i < n - 1; i++) {
            mp[sorted[i]].push_back(sorted[i - 1]);
            mp[sorted[i]].push_back(sorted[i + 1]);
        }
        int c = 0;
        for (int i = 0; i < n; i++) {
            vector<int> v = mp[arr[i]];
            if (find(v.begin(), v.end(), arr[i + 1]) == v.end()) {
                c++;
            }
        }
        cout << c << '\n';
    }
    return 0;
}
