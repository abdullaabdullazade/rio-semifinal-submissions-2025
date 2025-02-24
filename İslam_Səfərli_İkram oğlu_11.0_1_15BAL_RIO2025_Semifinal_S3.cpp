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

void solve(){
    int n;
    cin >> n;
    vl v(n + 1);
    for(int i = 0; i < n; i ++){
        cin >> v[i];
    }
    vl a;
    ll sum = 0;
    for(int i = 0; i < n; i ++){
        a.pb(abs(v[i] - v[(i + 1) % n]));
        sum += (abs(v[i] - v[(i + 1) % n]));
    }
    ll need = sum / 2;
    if(sum % 2){
        cout << -1;
        return ;
    }
    vl ind;
    /*for(auto i : a){
        cout << i << " ";
    }
    cout << endl;*/
    for(int bit = 1; bit < (1 << n); bit ++){
        ll cur = 0;
        for(int i = 0; i < n; i ++){
            if(bit & (1 << i)){
                cur += a[i];
                ind.pb(i + 1);
            }
        }
        if(cur == need){
            break;
        }
        ind.clear();
    }
    cout << ind.size() << endl;
    for(int i = 0; i < ind.size(); i ++){
        cout << ind[i] << ' ';
    }
}

signed main(){
    int test = 1;
    cin >> test;
    while(test --){
        solve();
        cout << endl;
    }
}
