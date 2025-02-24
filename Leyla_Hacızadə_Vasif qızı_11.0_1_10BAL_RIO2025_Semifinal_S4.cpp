/* :) */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define pll pair<ll, ll>
const int sz = 1005;
vector<ll>g[sz];

int main()
{
    ll k, n, x;
    cin>>k>>n;
    for (ll i = 1; i<=k; i++){
        for (ll j = 1; j<=n; j++){
            cin>>x;
            g[i].push_back(x);
        }
        sort(g[i].begin(), g[i].end());
    }


    ll dif = LLONG_MAX;

    for (ll s = 1; s<=k; s++){
        for (ll i = 0; i<n; i++){
            x = g[s][i];
            ll mn = x, mx = x;

            for (ll j = 1; j<=k; j++){
                if (j == s) continue;
                ll f = lower_bound(g[j].begin(), g[j].end(), x) - g[j].begin();
                if (f >= n) f--;
                mn = min(mn, g[j][f]);
                mx = max(mx, g[j][f]);
            }

            mx -= mn;
            dif = min(dif, mx);

        }
    }
    cout<<dif;






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
