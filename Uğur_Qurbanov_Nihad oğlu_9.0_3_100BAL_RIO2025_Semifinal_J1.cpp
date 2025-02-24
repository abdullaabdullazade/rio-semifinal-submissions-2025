#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

const int sz = 2e5  + 5;

void solve(){
    string s; cin >> s;
    int k; cin >> k;
    int saat = (s[0] - '0') * 10 + (s[1] - '0');
    int deq = (s[3] - '0') * 10 + (s[4] - '0');
    int vaxt = saat * 60 + deq;
    vaxt += k; vaxt = vaxt % 1440;
    if(vaxt / 60 < 10) cout << 0;
    cout << vaxt / 60 << ':';
    if(vaxt % 60 < 10) cout << 0;
    cout << vaxt % 60 << '\n';
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0); int t;
    cin >> t; while(t--) solve();
}