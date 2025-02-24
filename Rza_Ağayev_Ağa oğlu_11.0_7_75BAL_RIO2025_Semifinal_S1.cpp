#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
#define ll long long
#define indexed_set <ll, null_type, less_equal<ll>, rb_tree_tag, tree_order_statistics_node_update>
#define pb push_back
#define all(v) v.begin(), v.end()
#define endl '\n'
void solve(){
    ll l, r;
    cin >> l >> r;
    for(int i = l; i <= r; i++){
        bool test = 1;
        string s = to_string(i);
        for(int i = 0; i < s.size() / 2; i++){
            if(s[i] != s[s.size() - i - 1]){
                test = 0;
                break;
            }
        }
        if(test){
            cout << "Palindrome!" << endl;
        }
        else{
            cout << i << endl;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t = 1;
    while(t--){
        solve();
    }
    return 0;
}
