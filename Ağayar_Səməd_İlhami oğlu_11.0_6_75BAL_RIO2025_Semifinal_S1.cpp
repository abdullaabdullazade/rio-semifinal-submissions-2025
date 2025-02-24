#include <bits/stdc++.h>
#define int long long
#define pii pair<int, int>
#define all(v) v.begin(), v.end()
using namespace std;
const int oo = 1e18 + 8, MAX = 1000 + 5, MOD = 1e9 + 7;

vector<int> arr[MAX];
void solve(){
    int n, k; cin >> n >> k;
    vector<int> v;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= k; j++){
            int a; cin >> a;
            arr[i].push_back(a);
            v.push_back(a);
        }
        sort(all(arr[i]));
        arr[i].push_back(oo);
    }
    sort(all(v));
    set<array<int, 3>> s;
    for(int i = 1; i <= n; i++){
        s.insert({arr[i][0], i, 0});
    }
    int ans = oo;
    for(int a : v){
        while((*s.begin())[0] < a){
            auto t = *s.begin();
            int i = t[1], j = t[2];
            j++;
            s.erase(s.begin());
            s.insert({arr[i][j], i, j});
        }
        ans = min(ans, (*s.rbegin())[0] - a);
    }
    cout << ans;
}

signed main(){
    int t = 1;
    while(t--) solve();
}
