#include<bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1000000000 + 7;
void solve()
{
    int n;
    cin >> n;
    vector<int>a(n),b(n);
    for(auto i = 0;i < n;i++) cin >> a[i];
    for(auto i = 0;i < n;i++) cin >> b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int ans = 1;
    vector<int>v;
    for(int i = 0;i < n;i++){
        auto it = upper_bound(b.begin(),b.end(),a[i]) - b.begin();
        if(it == 0){
            cout << 0 << endl;
            return;
        }
        v.push_back(it);
    }
    sort(v.begin(),v.end());
    int c = 0;
    for(int i = 0;i < n;i++){
        ans *= (v[i] - c);
        ans %= mod;
        if(v[i] - c <= 0){
            cout << 0 << endl;
            return;
        }
        c++;
    }
    cout << ans << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}
