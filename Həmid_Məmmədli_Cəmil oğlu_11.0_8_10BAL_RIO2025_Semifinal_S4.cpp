#include <bits/stdc++.h>
using namespace std;

#define speed ios::sync_with_stdio(false)

int a[1005][1005];

void solve(){
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    int minn = INT_MAX;
    for(int i = 0; i < m; i++){
        // cout << "bruh";
        for(int j = 0; j < m; j++){
            minn = min(minn, abs(a[0][i] - a[1][j]));
            // cout << "1: " << a[0][i] << " 2: " << a[1][j] << endl;
        }
    }
    cout << minn;
}

signed main(){
    speed;
    int t;
    t=1;
    //cin >> t;
    while(t--){
        solve();
    }
}

// for(int i = 0; i < n; i++){
    //     v.clear();
    //     int k;
    //     string s = "";
    //     for(int j = 0; j < m; j++){
    //         cin >> k;
    //         v.push_back(k);
    //     }
    //     sort(v.begin(), v.end());
    //     for(int j = 0; j < m; j++){
    //         a[i][j] = v[j];
    //     }
    // }