#include <bits/stdc++.h>
#define int long long
#define pii pair<int, int>
#define all(v) v.begin(), v.end()
using namespace std;
const int oo = 1e18 + 8, MAX = 2e5 + 5, MOD = 1e9 + 7;

int par[MAX];
int cc;

int get(int a){
    if(par[a] < 0) return a;
    return par[a] = get(par[a]);
}
bool unite(int u, int v){
    u = get(u), v = get(v);
    if(u == v) return 0;
    if(-par[u] < -par[v]) swap(u, v);
    par[u] += par[v];
    par[v] = u;
    cc--;
    return 1;
}

void solve(){
    int n; cin >> n;
    cc = n;
    for(int i = 1; i <= n; i++) par[i] = -1;
    map<int, int> mp;
    for(int i = 1; i <= n; i++){
        int a; cin >> a;
        mp[a] = i;
    }
    vector<pii> v;
    for(auto a : mp){
        v.push_back(a);
    }
    for(int i = 0; i < n - 1; i++){
        if(abs(v[i].second - v[i + 1].second) == 1) unite(v[i].second, v[i + 1].second);
    }
    cout << cc << '\n';
}

signed main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int t = 1;
    cin >> t;
    while(t--) solve();
}
