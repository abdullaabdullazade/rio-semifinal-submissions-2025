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
struct e{
    ll val,  r,  ind;
    bool c(const e &a, const e &b) {
        return a.val > b.val; 
    }

};
struct comp {
    bool operator()(const e &a, const e &b) {
        return a.val > b.val; 
    }
};
void solve(){
    ll n,k;
    cin >> n >> k;
    vector<vector<ll>>v(n, vector<ll>(k));

    priority_queue<e, vector<e>, comp >pq;
    ll x;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < k; j++){
            cin >> v[i][j];
        }
        sort(v[i].begin(), v[i].end());

    }
    ll now = -INF;
    for(ll i = 0; i < n; i++){
        pq.push({v[i][0], i, 0});
        now = max(now, v[i][0]);
    }

    ll bm = 0,bma = 0;
    ll ans = INF;

    while(true){
        e t = pq.top();
        pq.pop();

        if(now - t.val  < ans){
            ans = now - t.val;
            bm = t.val;
            bma = now;
        }
        if(t.ind + 1 == k){
            break;
        }

        ll num = v[t.r][t.ind + 1];
        pq.push({num, t.r, t.ind + 1});
        now = max(now, num);
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
