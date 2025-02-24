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
    ll n, i, j;
    cin >> n;
    vl ans, v(n + 2);
    for(i = 1; i <= n; i++){
        cin >> v[i];
    }
    v[n + 1] = v[1];
    for(i = 1; i <= n; i++){
        if(v[i] < v[i + 1]){
            ans.pb(i);
        }
    }
    if(ans.empty()){ans.pb(1);}
    cout << ans.size() << endl;
    for(auto x: ans){
        cout << x << ' ';
    }cout << endl;
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
