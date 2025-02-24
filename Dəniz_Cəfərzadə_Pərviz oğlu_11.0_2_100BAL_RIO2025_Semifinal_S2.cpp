#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

const int sz = 2e5  + 5;

void solve(){
    int n; cin >> n;
    int arr[n], ans = 1;
    map<int, int>mp;
    for(int i = 0; i < n; i++) cin >> arr[i], mp[arr[i]] = i;
    sort(arr, arr + n);
    for(int i = 0; i < n - 1; i++){
        if(abs(mp[arr[i]] - mp[arr[i+1]]) > 1) ans++;
    }
    cout << ans << '\n';
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0); int t;
    cin >> t; while(t--) solve();
}