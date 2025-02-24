#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define all(x) x.begin() , x.end()
const int INF = 1e9 + 7 ;


void solve(){
    ll d ;
    string s;
    cin >> s >> d ;
    ll s1 = (int(s[0])-48)*10 + (int(s[1])-48) ;
    ll d1 = (int(s[3])-48)*10 + (int(s[4])-48) ;
    ll cur = s1*60 + d1 ;
    cur += d ;
    if(cur >= 1440)
        cur %= 1440 ;
    if(cur / 60 < 10)
        cout << "0" << cur/60 << ":" ;
    else
        cout << cur / 60 << ":" ;
    if(cur % 60 < 10)
        cout << "0" << cur%60 << endl  ;
    else
        cout << cur / 60 << endl ;
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll tt = 1 ;
    cin >> tt ;
    while(tt--)
        solve() ;

}
