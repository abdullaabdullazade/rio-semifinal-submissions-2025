#include<bits/stdc++.h>
using namespace std;
#define int long long


const int sz = 2e5;
int a[1001][1001];
void solve(){
    int n , k;
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= k; j++){
            cin >> a[i][j];
        }
    }
    int ans = INT_MAX;
    for(int i = 1; i <= k; i++){
        for(int j = 1; j <= k; j++){
            ans = min(ans, abs(a[1][i] - a[2][j]));
        }
    }
    cout << ans << endl;
}

signed main(){
    int t = 1;
    //cin >> t;
    while(t--) solve();
}
