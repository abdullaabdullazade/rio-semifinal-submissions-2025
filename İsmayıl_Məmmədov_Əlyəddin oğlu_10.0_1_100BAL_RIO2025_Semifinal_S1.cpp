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

bool isPalindrome(string str) {
    string rev = str;
    reverse(all(rev));
    return rev == str;
}

void run_case() {
    int L, R;
    cin >> L >> R;

    for (int i = L; i <= R; i++) {
        string str = to_string(i);
        cout << (isPalindrome(str) ? "Palindrome!" : str) << '\n';
    }
    
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