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

void solve(){
    cin >> n;
    ll a[n + 1], b[n + 1];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    ll sum = 0;
    for(int i = 0; i < n; i++){
        if(n - 1 == i){
            b[i] = abs(a[n - 1] - a[0]);
        }
        else{
            b[i] = abs(a[i] - a[i + 1]);
        }
        sum += b[i];
    }
    for(int i = 1; i < (1 << n); i++){
        vector<ll>v;
        ll x = 0;
        for(int c = 0; c < n; c++){
            if((i & (1 << c)) != 0){
                v.pb(c);
                x += b[c];
            }
        }
        if(x * 2 == sum){
            cout << v.size() << endl;
            for(auto i : v){
                cout << i + 1 << " ";
            }
            cout << endl;
            break;
        }
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
