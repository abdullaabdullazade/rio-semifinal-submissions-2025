#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

const int sz = 2e5 + 5;

void solve(){
    int l, r; cin >> l >> r;
    for(int i = l; i <= r; i++){
        string s1 = to_string(i), s2 = to_string(i);
        reverse(s2.begin(), s2.end());
        if(s1 == s2){ cout << "Palindrome!" << '\n'; }
        else{ cout << i << '\n'; }
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0); solve();
}
