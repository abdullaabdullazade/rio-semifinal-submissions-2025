#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
#define ll long long
#define indexed_set <ll, null_type, less_equal<ll>, rb_tree_tag, tree_order_statistics_node_update>
#define pb push_back
#define all(v) v.begin(), v.end()
bool check(ll x){
    string s = to_string(x);
    for(int i = 0; i < s.size() / 2; i++){
        if(s[i] != s[s.size() - i - 1]) return false;
    }
    return true;
}
void solve(){
    ll l, r;
    cin >> l >> r;
    vector<string>ans;
    for(int i = l; i <= r; i++){
        if(check(i)){
            ans.pb("Palindrome!");
        }
        else{
            ans.pb(to_string(i));
        }
    }
    for(auto i : ans){
        cout << i << endl;
    }
}
int main(){
    ll t = 1;
    while(t--){
        solve();
    }
    return 0;
}
