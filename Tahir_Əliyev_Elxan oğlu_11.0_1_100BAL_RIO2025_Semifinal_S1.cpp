#include <bits/stdc++.h>
#define int long long
#define pii pair<int, int>
#define all(v) v.begin(), v.end()
using namespace std;
const int oo = 1e18 + 8, MAX = 2e5 + 5, MOD = 1e9 + 7;

void solve(){
    int l, r; cin >> l >> r;
    for(int i = l; i <= r; i++){
        string s = "";
        int a = i;
        while(a){
            s += (a % 10) + '0';
            a /= 10;
        }
        bool b = 1;
        for(int i = 0; i < s.size() / 2; i++){
            b &= (s[i] == s[s.size() - i - 1]);
        }
        if(b) cout << "Palindrome!\n";
        else cout << i << '\n';
    }
}

signed main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int t = 1;
    while(t--) solve();
}
