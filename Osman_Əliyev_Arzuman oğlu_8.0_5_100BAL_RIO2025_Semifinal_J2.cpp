#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const long long MOD = 1000000007;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<long long> boxes(n), toys(n);

        for (int i = 0; i < n; i++)
            cin >> boxes[i];
        for (int i = 0; i < n; i++)
            cin >> toys[i];

        // Qutuları artan, oyuncaqları azalan sıraya düzürük
        sort(boxes.begin(), boxes.end());
        sort(toys.begin(), toys.end(), greater<long long>());

        long long ways = 1;
        for (int i = 0; i < n; i++) {
            // toys[i]-i uyğun qutuların sayını tapırıq:
            // boxes vektorunda toys[i] dəyərinə uyğun ilk elementin indeksini tapırıq.
            int idx = lower_bound(boxes.begin(), boxes.end(), toys[i]) - boxes.begin();
            // idx-dən sonra qalan qutular toys[i] üçün yararlıdır.
            long long available = (n - idx) - i; // artıq istifadə olunmuş qutular çıxılır.
            if (available <= 0) {
                ways = 0;
                break;
            }
            ways = (ways * available) % MOD;
        }

        cout << ways << "\n";
    }

    return 0;
}
