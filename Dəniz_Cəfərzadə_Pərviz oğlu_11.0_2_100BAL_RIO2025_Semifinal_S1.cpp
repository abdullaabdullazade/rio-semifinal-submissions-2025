#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

const int sz = 2e5  + 5;

void solve(){
    int l, r; cin >> l >> r;
    for(int i  = l; i <= r; i++){
        string s = to_string(i);
        string k = to_string(i);
        reverse(k.begin(), k.end());
        if(s == k) cout << "Palindrome!\n";
        else cout << i << '\n';
    }
}

signed main(){
    solve();
}