#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    // Bütün elementləri (bacarıq səviyyəsi, komanda indeksi) şəklində saxlamaq üçün vektor.
    int total = n * k;
    vector<pair<long long, int>> arr;
    arr.reserve(total);

    // Hər komandadan işçilərin bacarıq səviyyələrini oxuyuruq.
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            long long skill;
            cin >> skill;
            arr.push_back({skill, i});
        }
    }

    // Bacarıq səviyyələrinə görə artan sıraya düzürük.
    sort(arr.begin(), arr.end());

    // Hər komandadan neçə elementin intervalda olduğunu saxlayacaq vektor.
    vector<int> count(n, 0);
    int distinct = 0;   // Intervalda olan unikal komandaların sayı.
    int left = 0;
    long long ans = LLONG_MAX;  // Cavabı maksimum dəyərdən başlayırıq.

    // Sağ göstərici ilə intervalı genişləndiririk.
    for (int right = 0; right < total; right++) {
        int team = arr[right].second;
        count[team]++;
        if (count[team] == 1) {
            distinct++; // Bu komandanın ilk elementi intervala daxil oldu.
        }

        // Əgər interval bütün komandaları əhatə edirsə, sol göstəricini irəli sürərək daralda bilərik.
        while (distinct == n) {
            // Cari intervalın fərqini hesablayırıq və minimuma endiririk.
            ans = min(ans, arr[right].first - arr[left].first);

            int leftTeam = arr[left].second;
            count[leftTeam]--;
            if (count[leftTeam] == 0) {
                distinct--; // Bu komanda artıq intervalda yoxdur.
            }
            left++; // Intervalın solunu daraldırıq.
        }
    }

    cout << ans << "\n";
    return 0;
}
