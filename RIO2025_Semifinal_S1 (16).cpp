#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;
#define ll long long
#define vl vector<ll>
#define endl "\n"
#define pb push_back
#define all(v) (v).begin(), (v).end()

map<ll, ll> mp;

void solve(){
    ll l, r;
    cin >> l >> r;
    for(ll i = l; i <= r; i ++){
        ll tm = i;
        vl v;
        while(tm != 0){
            ll n1 = tm % 10;
            tm /= 10;
            v.pb(n1);
        }
        ll l1 = 0, r1 = v.size() - 1;
        //cout << i << " : " << v.size() << endl;
        while(l1 <= r1 && l1 < v.size() && r1 >= 0){
            mp[i] = 1;
            if(v[l1] != v[r1]){
                mp[i] = 0;
                break;
            }
            else{
                l1 ++;
                r1 --;
            }
        }
    }
    for(ll i = l; i <= r; i ++){
        if(mp[i] == 1){
            cout << "Palindrome!\n";
        }
        else{
            cout << i << endl;
        }
    }
}

signed main(){
    int test = 1;
    //cin >> test;
    while(test --){
        solve();
        cout << endl;
    }
}
