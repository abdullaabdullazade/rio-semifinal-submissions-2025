#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vl vector<ll>
#define vii vector<pii>
#define vll vector<pll>
#define endl '\n'
#define pb push_back
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()

// #define int ll

const int sz = 1e5 + 5;
int n, a[sz];

void fmain(){
    cin >> n;
    multiset<pii> mt;
    int s = 0;
    vi v = {0};
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        if(i > 1)   v.pb(abs(a[i] - a[i - 1])), s += abs(a[i] - a[i - 1]);
    }
    v.pb(abs(a[n] - a[1])), s += abs(a[n] - a[1]);
    n = v.size() - 1;
    vector<vi> dp(n + 5, vi(s + 5, 0));
    vector<vii> par(n + 5, vii(s + 5, {0, 0}));
    dp[0][0] = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 0; j <= s; j++){
            if(dp[i - 1][j])    dp[i][j] = 1, par[i][j] = {i - 1, j};
            if(j - v[i] >= 0 and dp[i - 1][j - v[i]])   dp[i][j] = 2, par[i][j] = {i - 1, j - v[i]};   
        }
    }
    if(s % 2){
        cout << -1 << endl;
        return;
    }
    // cout << s / 2 << endl;
    if(dp[n][s / 2]){
        vi res;
        int x = n, y = s / 2;
        while(x > 0){
            if(dp[x][y] == 2){
                res.pb(x);
            }
            // cout << "cur : " << x << " " << y << " ; " << dp[x][y] << endl;
            // cout << "pcur : " << par[x][y].first << " " << par[x][y].second << endl;
            int tx = x, ty = y;
            x = par[tx][ty].first, y = par[tx][ty].second;
        }
        cout << min(n - 1, (int)res.size()) << endl;
        bool f = (res.size() == n);
        for(int i : res){
            if(v[i] == 0 and f) {
                f = false;
                continue;
            }
            cout << i << " ";
        }
        cout << endl;
        return;
    }
    cout << -1 << endl;
}

signed main(){
    // fastio;
    int tsts = 1;
    cin >> tsts;
    while(tsts--){
        fmain();
    }
}