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
    ll ans = INT_MAX;
    for(int i = 0; i < k; i++){
        for(int c = 0; c < k; c++){
            ans = min(ans, abs(a[1][i] - a[0][c]));
        }
    }
    cout << ans;
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
    ll t = 1;
    while(t--){
        solve();
    }
    return 0;
}
