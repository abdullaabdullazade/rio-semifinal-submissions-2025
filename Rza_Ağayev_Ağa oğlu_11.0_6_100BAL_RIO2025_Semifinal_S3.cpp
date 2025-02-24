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
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    ll sum = 0;
    for(int i = 1; i <= n; i++){
        if(n == i){
            b[i] = abs(a[n] - a[1]);
        }
        else{
            b[i] = abs(a[i] - a[i + 1]);
        }
        sum += b[i];
    }
    vector<ll>v;
    ll sum1 = 0;
    for(int i = 1; i <= n; i++){
        if(i == n){
            if(a[i] > a[1]){
                v.pb(i);
                sum1 += b[i];
            }
        }
        else{
            if(a[i] > a[i + 1]){
                v.pb(i);
                sum1 += b[i];
            }
        }
    }
    if(sum1 * 2 != sum){
        cout << -1 << endl; return ;
    }
    if(v.size() == 0){
        v.pb(1);
    }
    cout << v.size() << endl;
    for(auto i : v){
        cout << i << " ";
    }
    cout << endl;
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
