#include <bits/stdc++.h>
#define ll long long
#define emplace(a) emplace_back(a)
#define mp(a, b) make_pair(a, b)
#define f first
#define s second
using namespace std;

void pal(ll n){
    string str = to_string(n);
    ll sz = str.size();
    for(ll i = 0; i < sz / 2; i++){
        if(str[i] != str[sz - 1 - i]){
            cout << n << "\n";
            return;
        }
    }
    cout << "Palindrome!\n";
}

void solve(){
   ll l, r;
   cin >> l >> r;
   for(ll i = l; i <= r; i++){
        pal(i);
   }

}

int main(){
    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }

}
