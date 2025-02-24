#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, k;
    cin >> n >> k;
    if(n == 2){
        vector<int>a(k), b(k);
        for(int &i : a){
            cin >> i;
        }
        for(int &i : b){
            cin >> i;
        }
        int ans = INT_MAX;
        for(int i = 0; i < a.size(); ++i){
            for(int j = 0; j < b.size(); ++j){
                ans = min(ans, max(a[i], b[j]) - min(a[i], b[j]));
            }
        }
        cout << ans << endl;
        return;
    }
}

signed main(){
    int T = 1;
    while(T--){
        solve();
    }
}
