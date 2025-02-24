#pragma gcc("O3")

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

const int sz = 1e3 + 5;
vector<int> st[sz];
vii v;
int n, k, x;

void fmain(){
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= k; j++){
            cin >> x;
            st[i].pb(x);
            v.pb({x, i});
        }
        sort(all(st[i]));
    }
    sort(all(v));
    int l = 1, r = 1e9, res = -1;
    while(l <= r){
        int mid = (l + r) / 2;
        bool f = false;
        vi cnt(n + 5, 0);
        int ok = 0, p = 0;
        for(pii x : v){
            cnt[x.second]++;
            if(cnt[x.second] == 1) ok++;
            while(v[p].first + mid < x.first){
                cnt[v[p].second]--;
                if(cnt[v[p].second] == 0) ok--;
                p++;
            }
            if(ok == n){
                f = true;
                break;
            }
        }
        if(f){
            res = mid;
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    cout << res << endl;
}

signed main(){
    fastio;
    int tsts = 1;
    // cin >> tsts;
    while(tsts--){
        fmain();
    }
}