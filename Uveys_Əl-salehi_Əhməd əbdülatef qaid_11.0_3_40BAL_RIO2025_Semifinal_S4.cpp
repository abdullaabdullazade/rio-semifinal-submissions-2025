#include<bits/stdc++.h>
using namespace std;
#define int long long


const int sz = 1005;
vector<int> v[sz];

void solve(){
    int n , k , x, y;
    cin >> n >> k;
    vector<pair<int,int>> a;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <=k; j++){
            cin >> x;
            a.push_back(make_pair(x, i));
        }
    }
    sort(a.begin(), a.end());
    for(int i = 0; i < a.size(); i++){
        v[a[i].second].push_back(i);
    }

    /*
    for(auto i : a){
        cout << i.first << " " << i.second << endl;
    }

    for(int i = 1; i <= n; i++){
        for(int  j : v[i]){
            cout << j << " ";
        }
        cout << endl;
    }

    cout << endl;
    */
    int ans = INT_MAX;
    for(int i = 0; i <=a.size(); i++){
        x = a[i].first;
        int mx = INT_MIN;
        for(int ii = 1; ii <= n; ii++){
            if(lower_bound(v[ii].begin(), v[ii].end(), i) == v[ii].end()){
                cout << ans << endl;
                return;
            }
            int z = *lower_bound(v[ii].begin(), v[ii].end(), i);
            mx = max(mx, z);
        }
        ans = min(a[mx].first - x, ans);
        //cout << mx  << " " << x << endl;
    }
    cout << ans << endl;
}

signed main(){
    int t = 1;
    //cin >> t;
    while(t--) solve();
}
