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

ll n, k;

void solve(){
    cin >> n >> k;
    vector<vector<ll> >a(n, vector<ll>(k));
    for(int i = 0; i < n; i++){
        for(int c = 0; c < k; c++){
            cin >> a[i][c];
        }
        sort(a[i].begin(), a[i].end());
    }
    vector<vector<pair<ll,ll> > >mini(1005, vector<pair<ll,ll> >(1005, {INT_MAX,INT_MAX}));
    for(int i = 0; i < k; i++){
        mini[0][i].f = a[0][i];
        mini[0][i].s = a[0][i];
    }
    for(int i = 1; i < n; i++){
        for(int c = 0; c < k; c++){
            mini[i][c].s = 0;
        }
    }
    for(int i = 1; i < n; i++){
        for(int c = 0; c < k; c++){
            ll x = lower_bound(a[i - 1].begin(), a[i - 1].end(), a[i][c]) - a[i - 1].begin();
//            cout << a[i][c] << " " << x << endl;
            if(x == k){
                mini[i][c].f = mini[i - 1][x - 1].f;
                mini[i][c].s = 0;
            }
            else if(x == 0){
                mini[i][c].f = INT_MAX;
                mini[i][c].s = mini[i - 1][x].s;
            }
            else{
                mini[i][c].f = min({mini[i - 1][x - 1].f, mini[i - 1][x].f});
                mini[i][c].s = max({mini[i - 1][x - 1].s, mini[i - 1][x].s});
            }
        }
    }
    ll ans = INT_MAX;
    for(int i = 0; i < k; i++){
        ans = min(ans, abs(a[n - 1][i] - mini[n - 1][i].f));
        ans = min(ans, abs(a[n - 1][i] - mini[n - 1][i].s));
    }
    cout << ans << endl;
}
int main(){
    cin.tie(0); cout.tie(0);
    ll t = 1;
    while(t--){
        solve();
    }
    return 0;
}
