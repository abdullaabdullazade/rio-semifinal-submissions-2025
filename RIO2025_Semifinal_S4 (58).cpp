#include <bits/stdc++.h>
#define ll long long
#define in insert
#define pb push_back
#define all(v) v.begin(), v.end()
#define endl '\n'
using namespace std;
const int sz = 1e3 + 5;
ll inf = 1e17;
ll a[sz][sz], p[sz];
int main()
{
    ll n, k, i, j, ans = inf;
    cin >> n >> k;
    for(i = 1; i <= n; i++){
        for(j = 1; j <= k; j++){
            cin >> a[i][j];
        }
    }
    multiset<array<ll, 2>> ms;
    for(i = 1; i <= n; i++){
        sort(a[i] + 1, a[i] + k + 1);
        p[i] = k;
        ms.in({a[i][k], i});
    }
    while(ms.size() == n){
        auto bg = ms.begin();
        auto ed = (--ms.end());
        ans = min(ans, ((*ed)[0] - (*bg)[0]));
        ll ix = (*ed)[1];
        ms.erase(ed);
        p[ix] --;
        if(p[ix]){
            ms.in({a[ix][p[ix]], ix});
        }
    }
    cout << ans << endl;
    
}