#include <bits/stdc++.h>
using namespace std;
#define int long long


void solve(){
    int n;
    cin >> n;
    vector<int>v(n);
    map<int,int>id;
    for(int i = 0; i < n; ++i){
        cin >> v[i];
        id[v[i]] = i;
    }
    vector<int>a = v;
    sort(a.begin(), a.end());
    for(int i = 0; i < n; ++i){
        id[a[i]] = i;
    }
    int idx = 0;
    int ans = 0;
    int inc = 0;
    while(idx < n){
            int j = idx + 1;
            if(id[v[j]] == id[v[idx]] + 1){
                inc = 1;
            }
            if(id[v[j]] == id[v[idx]] - 1){
                inc = -1;
            }
            if(inc == 0){
                idx++;
                ans++;
                continue;
            }
            while(j < n && (id[v[j]] - id[v[j - 1]] == inc)){
                ++j;
            }
            ans++;
            idx = j;
            inc = 0;
    }
    cout << ans << endl;

}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int T = 1;
    cin >> T;
    while(T--){
        solve();
    }
}
