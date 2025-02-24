#include <bits/stdc++.h>
using namespace std;
#define speed ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define read(a, n) for(ll i = 0; i < n; i++){cin>>a[i];}
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define ar array
#define ss second
#define ff first
#define ins insert
#define pb push_back

const ll mod = 1e9 + 7;

ll fact(ll n){
    return ((n > 1) ? n * fact(n - 1) % mod : 1) % mod;
}

void solve(){
    ll n, m; cin >> n >> m;
    vector<ar<ll,2>>row(n, {0, 0}), col(m, {0, 0});
    vector<vector<bool>>g(n, vector<bool>(m));
    fori(n) forj(m){
        char x;
        cin >> x;
        g[i][j] = x - '0';
        row[i][g[i][j]]++;
        col[j][g[i][j]]++;
    }
    ll ans = 0;
    fori(n) forj(m){
        ll zero = row[i][0] + col[j][0] - ((g[i][j] == 0) ? 2 : 0);
        ll one = row[i][1] + col[j][1] - ((g[i][j] == 1) ? 2 : 0);
        ll maks = max(zero, one);
        if(maks == (n + m - 2)) ans++;
    }
    cout << ans << endl;
}

int main(){
    speed
    ll t = 1; //cin >> t;
    while(t--) solve();
}
