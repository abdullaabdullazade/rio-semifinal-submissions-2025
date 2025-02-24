//Bismillahirrahmanirahim 
// ibo orz, rashad m orz
// wcdeki su qaynar idi


#include <bits/stdc++.h>
using namespace std;
#define intt long long
#define fi first
#define se second
#define pb push_back
#define ALL(x) x.begin(), x.end()
#define endl "\n"
const intt mxN = 1e5 + 5;
const intt inf = 1e18;
const intt mod = 1e9 + 7; // mind these

void solve() {
    intt n;
    cin >> n;
    vector<intt> a(n);
    intt sum = 0;
    for(intt i = 0; i < n; i++) {
        cin >> a[i];
        if(i != n - 1) sum += abs(a[i] - a[i+1]);
    }
    vector<pair<intt,intt>> b(n);
    for(intt i = 0; i < n - 1; i++) {
        b[i].first = abs(a[i] - a[i+1]);
        b[i].second = i+1;
    }
    b[n-1] = {abs(a[n-1] - a[0]), n};
    for(intt mask = 0; mask < (1 << n); mask++) {
        vector<intt> sol, sag;
        intt s1 = 0, s2 = 0;
        for(intt i = 0; i < n; i++) {
            if((mask & (1 << i))) {
                sol.pb(b[i].second);
                s1 += b[i].first;
            } else {
                sag.pb(b[i].second);
                s2 += b[i].first;
            }
        }
        if(s1 == s2 && not sag.empty() && not sol.empty()) {
            cout << sag.size() << endl;
            for(intt i = 0; i < sag.size(); i++) {
                cout << sag[i] << " ";
            }
            cout << endl;
            return;
        }
    }
    cout << -1 << endl;
    return;
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
