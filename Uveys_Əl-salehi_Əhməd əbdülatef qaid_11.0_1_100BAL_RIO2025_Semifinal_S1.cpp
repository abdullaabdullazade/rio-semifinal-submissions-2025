#include<bits/stdc++.h>
using namespace std;
#define int long long


const int sz = 2e5;

void solve(){
    int l ,r;
    cin >> l >> r;
    for(int i = l; i<=r; i++){
        string s = to_string(i);
        bool ok = true;
        for(int j = 0; j<s.size(); j++){
            if(s[j] != s[s.size()-j-1]){
                ok = false;
                break;
            }
        }
        cout << ((ok) ? "Palindrome!" : s ) << endl;
    }
}

signed main(){
    int t = 1;
    while(t--) solve();
}
