#include <bits/stdc++.h>
using namespace std;
#define int long long
#define eb emplace_back
const int inf = 1e9 + 7;

void solve(){
    int n;
    cin >> n;
    vector<int>v(n + 1);
    map<int,int>mp;
    for(int i = 0; i < n; ++i){
        cin >> v[i];
        mp[v[i]]++;
    }
    v[n] = v[0];
    if(mp.size() == 1){
        cout << 1 << endl;
        cout << 1 << endl;
        return;
    }
    vector<int>ans;
    for(int i = 0; i < n; ++i){
        if(v[i] < v[i + 1]){
            ans.push_back(i + 1);
        }
    }
    cout << ans.size() << endl;
    for(auto i : ans){
        cout << i << ' ';
    }
    cout << endl;

}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int T = 1;
    cin >> T;
    while (T--) {
        solve();
    }
}