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

void solve(){
    int l, r;
    cin >> l >> r;
    for (int i = l; i <= r; i++) {
        string s = to_string(i);
        string x = s;
        reverse(x.begin(), x.end());
        if (s == x) {
            cout << "Palindrome!" << endl;
        } else {
            cout << i << endl;
        }
    }
}



signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();

    return 0;
}
