//Bismillahirrahmanirahim 
// ibo orz, rashad m orz
// wcdeki su qaynar idi


#include <bits/stdc++.h>
using namespace std;
#define intt long long
#define fi first
#define se second
#define pb push_back

const intt mxN = 1e5 + 5;
const intt inf = 1e18;
const intt mod = 1e9 + 7; // mind these

bool check(intt num) {
    string s = to_string(num);
    for(intt i = 0; i < s.size(); i++) {
        if(i > s.size() - i - 1) break;
        if(s[i] != s[s.size() - i - 1]) {
            return false;
        }
    }
    return true;
}

void solve() {
    intt l, r;
    cin >> l >> r;
    for(intt i = l; i <= r; i++) {
        if(check(i)) {
            cout << "Palindrome!" << endl;
        } else {
            cout << i << endl;
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    intt tst = 1;
    // cin >> tst;
    while(tst--) {
        solve();
    }
}
