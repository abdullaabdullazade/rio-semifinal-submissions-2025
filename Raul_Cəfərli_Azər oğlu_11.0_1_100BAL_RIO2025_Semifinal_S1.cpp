#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define in insert
#define vl vector<ll>
#define all(v) v.begin(), v.end()
#define fi first
#define se second
#define endl "\n"
using namespace std;
void solve(){
    ll l, r, i, j, x;
    cin >> l >> r;
        vl v;
    for(i = l; i <= r; i++){
        x = i;
        while(x > 0){
            v.pb(x % 10);
            x /= 10;
        }
        bool f = 1;
        for(j = 0; j < (v.size() / 2); j++){
            f &= (v[j] == v[v.size() - j - 1]);
        }
        if(f){
            cout << "Palindrome!" << endl;
        }
        else{
            cout << i << endl;
        }
        v.clear();
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}
