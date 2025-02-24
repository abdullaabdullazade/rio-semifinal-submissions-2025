/// YA ALLAH!!!

#include<bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
#define pll pair<ll, ll>
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

using namespace std;

bool is_polindrome(string s) {
    for(int i = 0; i < s.size() / 2; i++) {
        if(s[i] != s[s.size()-i-1]) return false;
    }
    return true;
}


void solve(){
    ll l, r; cin >> l >> r;
    for(int i = l; i <= r; i++) {
        string s = to_string(i);
        if(is_polindrome(s)) cout << "Palindrome!" << endl;
        else cout << i << endl;
    }
}


signed main() {
    fastio;
    int t = 1; //cin >> t;
    while(t--) solve();
}
