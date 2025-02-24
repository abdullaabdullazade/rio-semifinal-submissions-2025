#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
#define ll long long
#define indexed_set <ll, null_type, less_equal<ll>, rb_tree_tag, tree_order_statistics_node_update>
#define pb push_back
#define all(v) v.begin(), v.end()
#define f first
#define s second
ll n;
ll st[100005 * 4], a[100005], ans = 0, test[100005];
void build(ll l, ll r, ll in){
    if(l == r){
        st[in] = 1;
        return ;
    }
    ll mid = (l + r) / 2;
    build(l, mid, in * 2);
    build(mid + 1, r, in * 2 + 1);
    st[in] = st[in * 2] + st[in * 2 + 1];
}
ll get(ll l, ll r, ll ql, ll qr, ll in){
    if(r < ql or qr < l){
        return 0;
    }
    if(ql <= l and r <= qr){
//        cout << l << " " << r << " " << ql << " " << qr << endl;
        return st[in];
    }
    ll mid = (l + r) / 2;
    return get(l, mid, ql, qr, in * 2) + get(mid + 1, r, ql, qr, in * 2 + 1);
}
void update(ll l, ll r, ll k, ll in){
    if(k < l or r < k){
        return ;
    }
    if(l == r){
        st[in] = 0;
        return ;
    }
    ll mid = (l + r) / 2;
    update(l, mid, k, in * 2);
    update(mid + 1, r, k, in * 2 + 1);
    st[in] = st[in * 2] + st[in * 2 + 1];
}
void check(ll i){
    if(i == 1){
        test[i] = 1;
    }
    else if(i == n - 1){
        test[i] = 1;
    }
    else if(a[i] > a[i - 1] and a[i] > a[i + 1] and test[i - 1]){
//              cout << i << "x" << endl;
        ans++;
        ll j = i - 1;
        while(j >= 1 and test[j]){
            update(1, n, a[j], 1);
            j--;
        }
        test[i] = 0;
    }
    else if(a[i] < a[i - 1] and a[i + 1] > a[i] and test[i - 1]){
//              cout << i << "y" << endl;
        ans++;
        ll j = i - 1;
        while(j >= 1 and test[j]){
            update(1, n, a[j], 1);
            j--;
        }
        test[i] = 0;
    }
}
void solve(){
    cin >> n;
    map<ll,ll>mp;
    vector<pair<ll,ll> >v;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        v.pb({a[i], i});
    }
    sort(all(v));
    ll num = 1;
    for(auto i : v){
        a[i.s] = num;
        num++;
    }
    ll b[n + 1];
    for(int i = 1; i <= n; i++){
        b[i] = a[i];
    }
    sort(b + 1, b + n + 1);
    build(1, n, 1);
    ll ans = 1, i = 1;
    update(1, n, a[1], 1);
    bool test[n + 1];
    while(i < n){
        if(abs(a[i] - a[i + 1]) == 1){
        }
        else{
            ans++;
        }
        i++;
    }
    cout << ans << endl;
    ans = 0;
    for(int i = 1; i <= n; i++){
        test[i] = a[i] = b[i] = 0;
    }
}
int main(){
    cin.tie(0); cout.tie(0);
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
