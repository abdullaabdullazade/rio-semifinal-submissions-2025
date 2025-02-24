#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define MOD 1000000007
#define INF 1e18
#define MAXN 200001
#define CC continue
#define BB break
#define S second
#define F first
#define asagi_en '\n'

 
int main() {
    ll t;
    cin >> t;
    while(t--) {
        ll n;
        vector<ll> box, toys;
        cin >> n;
        for(ll i = 0; i < n; i++) {
            ll a;
            cin >> a;
            box.pb(a);
        }
        for(ll i = 0; i < n; i++) {
            ll a;
            cin >> a;
            toys.pb(a);
        }
        sort(box.begin(), box.end());
        sort(toys.begin(), toys.end());
        ll p = 0, ans = 1;
        for(int i = 0; i < n; i++) {
            if(box[i] < toys[i]) {
                p = 1;
                cout << 0 << asagi_en;
                BB;
            }
            auto it = upper_bound(toys.begin(), toys.end(), box[i]);
            ll d = distance(toys.begin(), it);
            d -= i;
            ans *= d;
            ans %= MOD;
        }
        if(p) CC;
        cout << ans << asagi_en;
    }

    return 0;
}