#include<bits/stdc++.h>
using namespace std;
#define int long long


const int sz = 2e5;
int a[sz];
void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    vector<int> b = v;
    sort(b.begin(), b.end());
    map<int,int> mp;
    for(int i = 1; i <= n; i ++){
        mp[b[i-1]] = i;
    }
    for(int i = 1 ; i <= n; i++){
        a[i] = mp[v[i-1]];
    }
    a[n+1] = INT_MIN;
    int ans = 0 , pos = 0; // 1 - azalir, 2 - artir
    for(int i = 1; i <= n + 1; i++){

        if( pos == 1 && a[i] != a[i-1] - 1){
            ans++;
            pos = 0;
        }
        if( pos == 2 && a[i] != a[i-1] + 1){
            ans++;
            pos = 0;
        }
        if(i == n+1) break;
        if(pos == 0){
            if(a[i] + 1 == a[i+1]){
                pos = 2;
            }
            else if(a[i] - 1 == a[i+1]){
                pos = 1;
            }
            else{
                ans++;
            }
        }
    }

    cout << ans << endl;

}

signed main(){
    int t = 1;
    cin >> t;
    while(t--) solve();
}
