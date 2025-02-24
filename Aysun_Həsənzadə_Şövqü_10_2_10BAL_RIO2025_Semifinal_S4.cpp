#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

const int sz = 2e5 + 5;

int a[sz];
vector<int>v[sz];

void solve(){
    int n, k; cin >> n >> k;
    if(n == 2){
        int a[k+1], b[k+1];
        for(int i = 1; i <= k; i++) cin >> a[i];
        for(int i = 1; i <= k; i++) cin >> b[i];
        int ans = 2e9;
        for(int i = 1; i <= k; i++){
            for(int j = 1; j <= k; j++){
                ans = min(ans, abs(a[i] - b[j]));
            }
        }
        cout << ans << '\n';
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
}
