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
#define inds tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

mt19937 rng(chrono::steady_clock().now().time_since_epoch().count());

//#define int ll


void solve(){
    ll n,sum = 0;
    cin >> n;
    vector<ll> a(n),b(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n-1; i++){
        b[i] = abs(a[i]-a[i+1]);
        sum += b[i];
    }
    b[n-1] = abs(a[n-1]-a[0]);
    sum += b[n-1];
    for(int bt = 1; bt < (1 << n)-1; bt++){
        ll cem = 0,say=0;
        for(int i = 0; i < n; i++){
            if(bt & (1 << i)){
                say++;
                cem += b[i];
            }
        }
        if(cem == sum/2){
            cout << say << endl;
            for(int i = 0; i < n; i++){
                if(bt & (1 << i)){
                    cout << i+1 << " ";
                }
            }
            cout << endl;
            return;
        }
    }
    cout << -1 << endl;
}


signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}
