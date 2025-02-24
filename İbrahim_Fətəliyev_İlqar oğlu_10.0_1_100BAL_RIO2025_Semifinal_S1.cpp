#include <bits/stdc++.h>

#define int long long

const int MAX = 1e1+100;
const int MOD = 100;
const int oo = 1e18;

using namespace std;

void solve(){
    int l,r;
    cin >> l >> r;
    for(int i = l;i<=r;i++){
        string s = to_string(i);
        bool p = true;
        if(s.size()<2){
            p = true;
        }else{
            for(int i = 0;i<s.size()/2;i++){
                if(s[i] == s[s.size()-i-1]){
                    continue;
                }else{
                    p = false;
                    break;
                }
            }
        }
        if(p){
            cout << "Palindrome!" << '\n';
        }else{
            cout << s << '\n';
        }
    }
}

signed main(){
    ios_base::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
}
