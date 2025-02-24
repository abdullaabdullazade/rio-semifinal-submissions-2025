#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define F first
#define S second
const int N = 3e5 + 5;
const int mod = 998244353;

int a[N] , b[N];

void solve()
{

    int n , m , x;
    cin >> n >> m;
    vector<pair<int , int> > v;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> x;
            v.pb({x , i});
        }
    }

    sort(v.begin() , v.end());
    map<int , int> cnt;
    int L = 0 , ans = LLONG_MAX;
    //cnt[x] --- x setirinden ne qeder element var mende
    for(int i = 0; i < v.size(); i++){
        cnt[v[i].S]++;
        while(cnt.size() == n && cnt[v[L].S] > 1){
            cnt[v[L].S]--;
            L++;
        }
        if(cnt.size() == n) /// her setirden element varsa
            ans = min(ans , v[i].F - v[L].F);
    }
    cout << ans << '\n';


}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
}
