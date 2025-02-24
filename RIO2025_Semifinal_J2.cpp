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
ll binpow(ll a, ll b){
    ll res = 1;
    while(b){
        if (b & 1) res = (1ll * res * a) % mod;
        b /= 2;
        a = (1ll * a * a) % mod;
    }
    return res;
}
/*
    3
    5 10 11
    9 4 5

    I II III
    4  9  5
    4  5  9
    5  9  4
    5  4  9

    dp[i] -> i-ci esyani qoya bilceyimiz yerlerin sayi

    9 -> 2
    5 -> 2
    4 -> 1
*/
void solve(){
    ll n;
    cin>>n;
    ll a[n], b[n], dp[n];
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++) cin>>b[i];
    sort(a, a+n);
    sort(b, b+n); reverse(b, b+n);
    dp[0]=n-(lower_bound(a, a+n, b[0])-a);
    //cout<<dp[0]<<endl;
    for(int i=1; i<n; i++){
        dp[i]=(n-(lower_bound(a, a+n, b[i])-a)-i)*dp[i-1]%mod;
    }
    cout<<dp[n-1]<<nl;
}
signed main(){
    Omar27;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt", "w", stdout);
    ll t = 1;
    cin >> t;
    for (ll cs = 1; cs <= t; cs++){
        //cout << "Case #" << cs << ": ";
        solve();
    }
}
/**
    Author: Omar Aliyev

**/
