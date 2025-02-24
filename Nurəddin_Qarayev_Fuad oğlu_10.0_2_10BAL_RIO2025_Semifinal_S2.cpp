//Bismillahirrahmanirahim 
// ibo orz, rashad m orz
// wcdeki su qaynar idi


#include <bits/stdc++.h>
using namespace std;
#define intt long long
#define fi first
#define se second
#define pb push_back
#define endl "\n"
#define ALL(x) x.begin(), x.end()

const intt mxN = 1e5 + 5;
const intt inf = 1e18;
const intt mod = 1e9 + 7; // mind these

void solve() {
    intt n;
    cin >> n;
    vector<intt> a(n);
    for(intt i = 0; i < n; i++) {
        cin >> a[i];
    }
    bool ok = true;
    for(intt i = 0; i < n - 1; i++) {
        if(a[i] < a[i+1]) {
            ok = false;
            break;
        }
    }
    if(ok || is_sorted(ALL(a))) {
        cout << 1 << endl;
        return;
    }
    cout << 2 << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    intt tst = 1;
    cin >> tst;
    while(tst--) {
        solve();
    }
}
