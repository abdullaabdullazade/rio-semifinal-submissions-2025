#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
const int mod = 1e9 + 7;

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        vector < int > a(n + 1);
        vector < int > b(n + 1);
        for(int i = 1;i <= n;i++){
            cin >> a[i];
        }
        for(int i = 1;i <= n;i++){
            cin >> b[i];
        }
        sort(a.begin() , a.end());
        sort(b.begin() , b.end());
        int res = 1 , idx = 1;
        for(int i = 1;i <= n;i++){
            while(idx <= n && a[i] >= b[idx]){
                idx++;
            }
            res = (res * (idx - i)) % mod;
        }
        cout << res % mod << endl;
    }
}
