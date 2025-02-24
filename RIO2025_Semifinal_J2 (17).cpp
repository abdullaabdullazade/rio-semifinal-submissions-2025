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
            ll c = 1;
            if(box[i] < toys[i]) {
                cout << 0 << asagi_en;
                p = 1;
                BB;
            }
            for(int j = i + 1; j < n; j++) {
                if(box[i] < toys[j]) {
                    BB;
                }
                c++;
            }
            ans *= c;
            ans %= MOD;
        }
        if(p) CC;
        cout << ans << asagi_en;
    }

    return 0;
}