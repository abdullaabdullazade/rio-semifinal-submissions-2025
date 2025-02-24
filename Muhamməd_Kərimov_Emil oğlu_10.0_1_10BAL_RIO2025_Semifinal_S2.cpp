#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll
#define fi first
#define se second
#define pb push_back
#define make_pair mpp

const int MAX = 1e5 + 100;
const int N = 1e6 + 5;
const int mod = 1e9 + 7;
const int oo = 1e18 + 9;
const int sz = 2e5 + 5;

int arr[sz], pre[sz];

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        
        int hisse = 1;
        vector<int> tmm;
        tmm.push_back(a[0]);
        
        for (int i = 1; i < n; i++) {
            if ((tmm.front() < tmm.back() && a[i] < tmm.back()) ||
                (tmm.front() > tmm.back() && a[i] > tmm.back())) {
                hisse++;
                tmm.clear();
            }
            tmm.push_back(a[i]);
        }
        
        cout << hisse << endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();

    return 0;
}
