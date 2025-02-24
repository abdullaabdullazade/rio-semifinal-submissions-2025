#include "bits/stdc++.h"
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define pb push_back
#define in insert
#define F first
#define S second
#define vll vector<ll>
#define all(v) v.begin(),v.end()
#define rep(a, b, c) for (int(a) = (b); (a) < (c); (a)++)//i, 0, n
#define endl '\n'
#define pii pair<ll,ll>
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
using namespace std;
const ll INF = 1e18, mod = 1e9 + 7, N = 2e5 + 5;
ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);
}
ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;
}
ll modpow(ll a, ll b) {
    ll ans = 1;
    while (b > 0) {
        if (b % 2 == 1) {
            ans = (ans * a) ;
        }
        a = (a * a);
        b >>= 1;
    }
    return ans ;
}
ll inv(ll a){
    return (modpow(a,mod-2)) % mod;
}

void solve(){
    ll n,k;
    cin >> n >> k;
    vector<ll>v[n];
    ll x;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < k; j++){
            cin >> x;
            v[i].pb(x);
        }
    }
 /*
   3 1 4
2 7 18
9 8 10
 */  
ll ans = INF;
    for(int i = 0; i < n; i++){
        for(auto j : v[i]){
            vll e;
            //j - > number
            ll num = j;
            e.pb(j);

            for(int h = 0; h < n; h++){
                if(h == i){
                    continue;
                }
                vll now;
                for(auto y : v[h]){
                    now.pb(y);
                }
                sort(all(now));
                auto it = lower_bound(all(now), num);
                if(it == now.end()){
                e.pb(now[0]);
                }
                else{
                    e.pb((*it));
                }
            }
            sort(all(e));
           // cout << num << endl;
          //  cout << endl;
          //  for(auto f : e) cout << f << " ";
          //  cout << endl;
            ans = min(ans, e[e.size() - 1] - e[0]);
        }
    }
    cout << ans << endl;
}
int main() {
    fast;
    ll t = 1;
   // cin >> t;
    while (t--) {
        solve();
    }
}
