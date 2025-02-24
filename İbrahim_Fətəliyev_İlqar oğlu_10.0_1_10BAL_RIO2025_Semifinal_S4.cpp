#include <bits/stdc++.h>

#define int long long

const int MAX = 1e1+100;
const int MOD = 100;
const int oo = 1e18;

using namespace std;

void solve(){
    int n,k;
    cin >> n >> k;
    vector<int> teams[n];
    for(int i  = 0;i<n;i++){
        for(int j = 0;j<k;j++){
            int x;
            cin >> x;
            teams[i].push_back(x);
        }
    }
    int mn = oo;
    for(int i = 0;i<k;i++){
        int f = teams[0][i];
        for(int j = 0;j<k;j++){
            int s = teams[1][j];
            mn = min(mn,abs(f-s));
        }
    }
    cout << mn;

}

signed main(){
    ios_base::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
}
