#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long double ld;
typedef long long ll;

#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

const int MXN = 2e5 + 5;
const int MOD = 1e9 + 7;

void run_case() {
    int N;
    cin >> N;
    vector<int> A(N), B(N);

    for (auto &a : A)
        cin >> a;

    for (int i = 0; i < N - 1; i++)
        B[i] = abs(A[i] - A[i + 1]);

    B[N - 1] = abs(A[N - 1] - A[0]);

    for (int mask = 1; mask < (1 << N); mask++) {
        vector<int> tmp;
        int sum = 0, sum1 = 0;

        for (int i = 0; i < N; i++) {
            if (mask & (1 << i)) {
                sum += B[i];
                tmp.push_back(i);
            } else {
                sum1 += B[i];
            }
        }

        if (sum == sum1) {
            cout << tmp.size() << '\n';

            for (auto &t : tmp)
                cout << t + 1 << ' ';
            
            cout << '\n';
            return;
        }
    }

    cout << "-1\n";
    return;
}

signed main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int test_case = 1;
    cin >> test_case;

    for (int num_case = 1; num_case <= test_case; num_case++)
        run_case();

    return 0;
}