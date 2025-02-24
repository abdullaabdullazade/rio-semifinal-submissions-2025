#include <bits/stdc++.h>
using namespace std;

#define speed ios::sync_with_stdio(false)

int sz = 2e5;

void solve(){
    int l, r;
    cin >> l >> r;
    for(int i = l; i <= r; i++){
        string s1, s2;
        bool lamp = 0;
        s1 = to_string(i);
        s2 = s1;
        reverse(s2.begin(), s2.end());
        // cout << s1 << " " << s2 << endl;
        for(int i = 0; i < s1.size(); i++){
            if(s1[i] != s2[i]){
                cout << s1 << endl;
                lamp = 1;
                break;
            }
        }
        if(lamp == 0){
            cout << "Palindrome!" << endl;
        }
    }
}

signed main(){
    speed;
    int t;
    t=1;
    //cin >> t;
    while(t--){
        solve();
    }
}