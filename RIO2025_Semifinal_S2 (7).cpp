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
    vl v(n), vv(n);
    map<ll, ll> mp;
    for(int i = 0; i < n; i ++){
        cin >> v[i];
        vv[i] = v[i];
    }
    sort(all(vv));
    for(int i = 0; i < n; i ++){
        mp[vv[i]] = i + 1;
    }
    int cnt = 0;
    bool ok = 0, okk = 0;
    for(int i = 0; i < n - 1; i ++){
        if(mp[v[i]] + 1 == mp[v[i + 1]] && !okk){
            ok = 1;
        }
        else if(!ok && mp[v[i]] - 1 == mp[v[i + 1]]){
            okk = 1;
        }
        else{
            cnt ++;
            ok = 0;
            okk = 0;
        }
    }
    cout << cnt + 1;
}

signed main(){
    int test = 1;
    cin >> test;
    while(test --){
        solve();
        cout << endl;
    }
}
