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
    for(int i = 0; i < n; i++){
        cin >> a[i];
    } 
    vll v;
    ll c1 = 0;
    ll c2 = 0;
    ll c = 0;
    for(int i = 0; i < n - 1; i++){
        v.pb(abs(a[i] - a[i + 1]));
        c += abs(a[i] - a[i + 1]);
    }
    v.pb(abs(a[0] - a[n - 1]));
    c += abs(a[0] - a[n - 1]);
    if(c % 2 != 0){
        cout << -1 << endl;
        return;
    }
    for(int i = 1; i <= (1 << n); i++){
        vll e;
        c1 = 0;
        c2 = 0;
        for(int j = 0; j < n; j++){
           
            if(((1 << j) & i) != 0){
                
                c1 += v[j];
                e.pb(j);
                
            }
            else{
               
                c2 += v[j];
            }
        }
        if(e.size() == n){
            continue;
        }
        if(c1 == c2){
           // cout << c1 << " " << c2 << endl;
            cout << e.size() << endl;
            for(auto r : e) cout << r + 1 << " ";
            cout << endl;
            return;
        }
       // e.clear();
      //  mp.clear();
    }
    cout << -1 << endl;
}
int main() {
    fast;
    ll t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}
