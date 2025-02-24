#include <bits/stdc++.h>
#pragma GCC optimize("03")
using namespace std;
#define ll long long
#define ld long double
#define nl '\n'
// indexed Set -----------------
//#include <bits/extc++.h>
//using namespace __gnu_pbds;
//typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> rbt;
//------------------------------
#define pll pair<ll,ll>
#define pb push_back
#define heap ll, vector<ll>, greater<ll>
#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()
//#define sz(s) s.size()
//mt19937 rng(chrono::steady_clock().now().time_since_epoch().count());
#define Omar27 ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
const ll sz = 1505, inf = 1e18, mod = 1e9+7;
const ll dx4[] = {1, -1, 0, 0}, dy4[] = {0, 0, -1, 1};
ll n, m, a[sz][sz], row[sz], col[sz];
ll binpow(ll a, ll b){
    ll res = 1;
    while(b){
        if (b & 1) res = (1ll * res * a) % mod;
        b /= 2;
        a = (1ll * a * a) % mod;
    }
    return res;
}
bool check(ll x, ll y){
    if(a[x][y]){
        return((row[x]==m and col[y]==n) or (row[x]==1 and col[y]==1));
    }
    else{
        return((row[x]==0 and col[y]==0) or (row[x]==m-1 and col[y]==n-1));
    }
}
void solve(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            char c;
            cin>>c;
            a[i][j]=c-'0';
            row[i]+=a[i][j];
            col[j]+=a[i][j];
        }
    }
    ll cvb=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(check(i, j)) cvb++;
        }
    }
    cout<<cvb;
}
signed main(){
    Omar27;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt", "w", stdout);
    ll t = 1;
    //cin >> t;
    for (ll cs = 1; cs <= t; cs++){
        //cout << "Case #" << cs << ": ";
        solve();
    }
}
/**
    Author: Omar Aliyev

**/
