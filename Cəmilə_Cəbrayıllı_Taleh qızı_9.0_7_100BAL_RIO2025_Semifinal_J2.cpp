#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;
#define int long long
//#define double long double
#define _FastIO ios_base::sync_with_stdio(0); cin.tie(0)
#define pb push_back
#define F first
#define S second
const int mod = 1e9 + 7;
const int N = 1e3 + 5;
const int INF = 1e9+7;


void solve()
{
   int n;
    cin >> n;
    vector<int> a(n) , b(n);
    for(int& i : a) cin >> i;
    for(int& i : b) cin >> i;

    sort(a.begin() , a.end());
    sort(b.begin() , b.end());
    int ans = 1;
    for(int i = 0; i < n; i++){
        int cnt = upper_bound(b.begin() , b.end() , a[i]) - b.begin();
        cnt -= i;
        if(cnt <= 0){
            ans = 0;
            break;
        }
        ans *= cnt;
        ans %= mod;
    }

    cout << ans << '\n';
    
}


signed main(){
    _FastIO;

    int T = 1;
    cin >> T;
    while(T--)
        solve();
}
