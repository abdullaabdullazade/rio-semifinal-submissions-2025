#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
#define ll long long
#define indexed_set <ll, null_type, less_equal<ll>, rb_tree_tag, tree_order_statistics_node_update>
#define pb push_back
#define all(v) v.begin(), v.end()
bool check(ll x){
    ll co = x;
    ll sz = 0;
    while(co != 0){
        sz++;
        co /= 10;
    }
    vector<ll>v1, v2;
    ll sz1 = 0, sz2 = 0;
    while(sz1 != sz / 2){
        sz1++;
        v1.pb(x % 10);
        x /= 10;
    }
    if(sz % 2 == 1)x/= 10;
    while(sz2 != sz / 2){
        sz2++;
        v2.pb(x % 10);
        x /= 10;
    }
    reverse(all(v2));
    for(int i = 0; i < v1.size(); i++){
        if(v1[i] != v2[i]) return false;
    }
    return true;
}
void solve(){
    ll l, r;
    cin >> l >> r;
    for(int i = l; i <= r; i++){
        if(check(i)){
            cout << "Palindrome!" << endl;
        }
        else{
            cout << i << endl;
        }
    }
}
int main(){
    ll t = 1;
    while(t--){
        solve();
    }
    return 0;
}
