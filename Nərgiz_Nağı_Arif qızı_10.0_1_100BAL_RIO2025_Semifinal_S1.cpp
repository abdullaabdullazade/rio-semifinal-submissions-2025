#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define pp pop_back
#define in insert
#define er erase
#define fi first
#define se second

using namespace std;

void solve(ll l, ll r){
    for(ll i = l; i <= r; i++){
        if(i <= 9){
            cout << "Palindrome!" << endl;
        }
        else{
            string s = to_string(i);
            string c = s;
            reverse(s.begin(), s.end());
            if(s == c){
                cout << "Palindrome!" << endl;
            }
            else{
                cout << i << endl;
            }
        }
    }
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll l, r;
    cin >> l >> r;
    solve(l, r);
}
