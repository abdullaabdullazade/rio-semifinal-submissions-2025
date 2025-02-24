#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define pp pop_back
#define in insert
#define er erase
#define fi first
#define se second

using namespace std;

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;
    while(t--){
        ll n, x;
        cin >> n;
        vector <ll> a, b, c;
        for(ll i = 0; i < n; i++){
            cin >> x;
            a.pb(x);
        }
        b = a;
        c = a;
        sort(b.begin(), b.end());
        sort(c.begin(), c.end());
        reverse(c.begin(), c.end());
        if(a == b or a == c){
            cout << 1 << endl;
        }
        else{
            cout << 2 << endl;
        }
    }
}
