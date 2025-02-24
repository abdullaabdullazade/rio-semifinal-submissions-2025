#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define all(x) x.begin() , x.end()
const int INF = 1e9 + 7 ;
const int mod = 1e9 + 7 ;

void solve(){
    ll n ;
    cin >> n ;
    vector < ll > a(n) , b(n) ;
    ll ans = 1 ;
    for (ll i = 0 ; i < n ; i++){
        cin >> a[i] ;
    }
    for(ll i = 0 ; i < n ; i++){
        cin >> b[i] ;
    }
    sort(all(a)) ;
    sort(all(b)) ;
    ll cnt[n] ;
    ll say = 0 ;
    for(ll i = 0 ; i < n ; i++){
        cnt[i] = n - (lower_bound(all(a) , b[i]) - a.begin()) ;
    }
    sort(cnt , cnt+n) ;
    for(ll i = 0 ; i < n ; i++){
        ans *= cnt[i] - i ;
        ans %= mod ;
    }
    cout << ans << endl ;
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll tt = 1 ;
    cin >> tt ;
    while(tt--)
        solve() ;

}
