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
    int N, M;
    cin >> N >> M;
    vector<int> A(M), B(M);

    for (auto &a : A)
        cin >> a;
    
    for (auto &b : B)
        cin >> b;

    int res = INT_MAX;
    sort(all(A));
    sort(all(B));

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            res = min(res, abs(A[i] - B[j]));
        }
    }

    cout << res;
    return;
}

signed main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int test_case = 1;
    // cin >> test_case;

    for (int num_case = 1; num_case <= test_case; num_case++)
        run_case();

    return 0;
}