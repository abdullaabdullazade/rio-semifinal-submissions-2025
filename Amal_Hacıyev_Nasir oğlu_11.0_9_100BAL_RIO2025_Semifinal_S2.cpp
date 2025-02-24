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
    ll n;
    cin >> n;
    ll a[n];
    vll v;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        v.pb(a[i]);
    }
    sort(all(v));
    ll cnt = 0;
    for(int i = 0; i < n - 1; i++){
        auto it = upper_bound(all(v), min(a[i],a[i + 1]));
        if(*it != max(a[i], a[i + 1])){
            cnt++;
        }
    }
    cout << cnt + 1 << endl;
}
int main() {
    fast;
    ll t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}
