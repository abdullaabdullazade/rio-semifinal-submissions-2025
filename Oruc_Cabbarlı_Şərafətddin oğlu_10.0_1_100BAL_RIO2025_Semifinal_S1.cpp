#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/hash_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define vi vector<int>
#define pii pair<int,int>
#define vpii vector<pii>
#define fi first
#define se second
#define all(v) v.begin(), v.end()
#define pb push_back
#define endl '\n'
#define inds tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

mt19937 rng(chrono::steady_clock().now().time_since_epoch().count());

#define int ll


void solve(){
    int l,r;
    cin >> l >> r;
    for(int i = l; i <= r; i++){
        string s = to_string(i);
        string s1 = s;
        reverse(all(s));
        if(s == s1){
            cout << "Palindrome!" << endl;
        }
        else cout << i << endl;
    }
}


signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
}
