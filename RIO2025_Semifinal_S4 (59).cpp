/* :) */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define pll pair<ll, ll>
const int sz = 1005;
ll a[sz], b[sz];

int main()
{
    ll k, n;
    cin>>k>>n;
    for (ll i = 1; i<=n; i++){
        cin>>a[i];
    }
    for (ll i = 1; i<=n; i++){
        cin>>b[i];
    }
    ll mn = LLONG_MAX;

    sort(a+1, a+n+1);
    sort(b+1, b+n+1);
    for (ll i = 1; i<=n; i++){
        ll x = lower_bound(b+1, b+n+1, a[i]) - b;
        if (x <= n){
            ll dif = abs(b[x] - a[i]);
            mn = min(mn, dif);
        }
        x--;
        if (x >= 1){
            ll dif = abs(b[x] - a[i]);
            mn = min(mn, dif);
        }
    }
    cout<<mn;




    /*sort(b+1, b+n+1);
        vector<ll>v;
        for (ll i = n; i>=1; i--){
            s += b[i].first;
            if (s <= sum){
                v.push_back(b[i].second);
                if (s == sum) break;
            }
            else {
                s -= b[i].first;
            }
        }
        if (s != sum){
            cout<<-1<<endl;
            continue;
        }
        cout<<v.size()<<endl;
        for (ll i = 0; i<v.size(); i++){
            cout<<v[i]<<' ';
        }
        cout<<endl;
    }*/

}
