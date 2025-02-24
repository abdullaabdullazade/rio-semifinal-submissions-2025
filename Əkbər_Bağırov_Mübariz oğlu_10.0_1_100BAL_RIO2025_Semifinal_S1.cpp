#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
#define run ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define endl '\n'
#define all(s) s.begin(),s.end()
/*int binpow(int a, int res){
    //int res = 1;
    while(a > 0){
        if(a & 1){
            res = a * res;
        }
        res = a*a;
        a >> 1;
    }
    return res;
}*/
////////////////////////////////////////////////////////////



void solve(){
    int l,r;
    cin >> l >> r;
    for(int i = l; i <= r;i++){
        string s = to_string(i);
        string t = s;
        reverse(all(t));
        if(t == s){
            cout << "Palindrome!" << endl;
        }
        else{
            cout << i << endl;
        }
    }
}
signed main(){
    run;
    int t = 1;
    //cin >> t;
    for(int i = 1; i <= t; i++){
        solve();
    }
}
