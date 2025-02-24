/* :) */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define pll pair<ll, ll>
const int sz = 1e5+5;
ll a[sz];

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t, n;
    cin>>t;
    while (t--){
        cin>>n;
        ll sum = 0, s = 0;
        for (ll i = 1; i<=n; i++){
            cin>>a[i];
        }
        a[n+1] = a[1];
        for (ll i = 1; i<=n; i++){
            ll x = abs(a[i] - a[i+1]);
            sum += x;
        }
        if (sum == 0){
            cout<<1<<endl<<1<<endl;
            continue;
        }
        if (sum%2!=0){
            cout<<-1<<endl;
            continue;
        }
        vector<ll>v;
        for (ll i = 1; i<=n; i++){
            if (a[i] > a[i+1]){
                v.push_back(i);
            }
        }
        cout<<v.size()<<endl;
        for (ll i = 0; i<v.size(); i++){
            cout<<v[i]<<' ';
        }
        cout<<endl;
    }
}

/*

1
6
20 10 4 2 4 15

10 6 2 2 11 5

2 2 5 6 10 11

*/
