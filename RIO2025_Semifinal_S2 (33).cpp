#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define in insert
#define vl vector<ll>
#define all(v) v.begin(), v.end()
#define fi first
#define se second
#define endl "\n"
using namespace std;
ll inf = 1e17;
void solve(){
    ll n, i, j, ans = 0;
    cin >> n;
    vl v(n + 2);
    v[n + 1] = inf;
    for(i = 1; i <= n; i++){
        cin >> v[i];
    }
    for(i = 1; i <= n; i++){
        ans ++;
        if(v[i] < v[i + 1]){
            while(i <= n && v[i] < v[i + 1]){i++;}
        }
        else{
            while(i <= n && v[i] > v[i + 1]){i++;}
        }
    }
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}
