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
    int n,cnt=0;
    cin >> n;
    vi a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 1; i < n-1; i++){
        if(a[i-1] < a[i] && a[i+1] < a[i]){
            cnt++;
            i++;
        }
        else if(a[i-1] > a[i] && a[i+1] > a[i]){
            cnt++;
            i++;
        }
    }
    cout << cnt+1 << endl;
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
