#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(v) v.begin(), v.end()
#define F first
#define S second
#define in insert
#define pb push_back
#define vll vector<ll>
using namespace __gnu_pbds;
using namespace std;
const ll mod = 1e9 + 7, N = 2e5 + 5, INF = 1e18;
typedef tree<ll, less<ll>, null_type, rb_tree_tag, tree_order_statistics_node_update> orderedset;
/*
vector<bool>p(N, false);
void phi(){
    p[2] = true;
    for(int i = 3; i < N; i += 2){
        p[i] = true;
    }
    for(int i = 2; i < N; i+= 2){
        if(p[i]){
        for(int j = i; j < N; j += ( 2 * i){
            p[i] = false;
        }
}
    }
}
*/
ll modpow(ll a, ll b){
    ll ans = 1;
    while(b > 0){
        if(b % 2 == 1){
            ans *= a;
            ans %= mod;
        }
        a = a * a;
        a  = a % mod;
        b = b / 2;
    }
    return ans;
}
ll inv(ll a){
    return(modpow(a, mod - 2) % mod);
}
void solve(){
    ll a,b;
    cin >> a >> b;
   // cout << to_string(5);
    while( a <= b){
        string s = to_string(a);
        string e =s;
        reverse(all(s));
        if(s == e){
            cout << "Palindrome!" << endl;
        }
        else{
            cout << a << endl;
        }
        a++;
    }
}
int main(){
    fast;
    ll t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
