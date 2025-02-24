#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector < ll >
#define setl set < ll >
#define pll pair < ll, ll >
#define nl "\n"
#define nll cout << nl
#define FOR(i, n) for(ll i = 1; i <= n; i++)
#define FORI(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
#define sync ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
const ll mod =  1e9 + 7;
const ll MAX = 2e5 + 5;
ll n, m, k;
ll a[MAX];
struct segtree{
    ll n;
    vl t, lazy;
    segtree(ll sz){
        n = sz;
        t.resize(4 * n, 0);
        lazy.resize(4 * n, 0);
    }
    void build(ll v, ll l, ll r){
        if(l == r){
            t[v] = a[l];
            return;
        }
        ll mid = (l + r) >> 1;
        build(v * 2 + 1, l, mid);
        build(v * 2 + 2, mid + 1, r);
        t[v] = t[v * 2 + 1] + t[v * 2 + 2];
    }
    void push(ll v, ll l, ll r){
        if(lazy[v]){
            t[v] += lazy[v] * (r - l + 1);
            if(l != r){
                lazy[v * 2 + 1] += lazy[v];
                lazy[v * 2 + 2] += lazy[v];
            }
            lazy[v] = 0;
        }
    }
    void update(ll v, ll l, ll r, ll lx, ll rx, ll add){
        if(lx > r || rx < l)return;
        push(v, lx, rx);
        if(l <= lx && rx <= r){
            lazy[v] += add;
            push(v, lx, rx);
            return;
        }
        ll mid = (lx + rx) >> 1;
        update(v * 2 + 1, l, r, lx, mid, add);
        update(v * 2 + 2, l, r, mid + 1, rx, add);
        t[v] = t[v * 2 + 1] + t[v * 2 + 2];
    }
    ll get(ll v, ll l, ll r, ll lx, ll rx){
        if(lx > r || rx < l)return 0;
        push(v, lx, rx);
        if(l <= lx && rx <= r){
            return t[v];
        }
        ll mid = (lx + rx) >> 1;
        return get(v * 2 + 1, l, r, lx, mid) + get(v * 2 + 2, l, r, mid + 1, rx);
    }
    ll get(ll l, ll r){
        return get(1, l, r, 1, n);
    }
    void upd(ll l, ll r, ll x){
        update(1, l, r, 1, n, x);
    }
};
struct fenwick{
    ll n;
    vl t;
    fenwick(ll sz){
        n = sz;
        t.resize(n + 1, 0);
    }
    ll get(ll idx){
        ll sum = 0;
        while(idx > 0){
            sum += t[idx];
            idx -= (idx & -idx);
        }
        return sum;
    }
    void update(ll idx, ll add){
        while(idx <= n){
            t[idx] += add;
            idx += (idx & -idx);
        }
    }
};
ll poww(ll a, ll b, ll m){
    a %= m;
    ll pr = 1;
    while(b){
        if(b & 1)pr = (pr * a % m) % m;
        a = (a * a) % m;
        b >>= 1;
    }
    return pr;
}
ll ch(ll x){
    string s = to_string(x);
    string t = s;
    reverse(all(t));
    return s == t;
}
void solve(){
    cin >> n >> m;
    for(ll i = n; i <= m; i++){
        if(ch(i)){
            cout << "Palindrome!" << nl;
        }
        else cout << i << nl;
    }
}
signed main(){
    sync;
    ll t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}
