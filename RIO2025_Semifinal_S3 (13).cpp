/* :) */
#include <bits/stdc++.h>
using namespace std;
//#define endl '\n'
#define ll long long
#define pll pair<ll, ll>
const int sz = 1e5+5;
ll a[sz]; pll b[sz];

int main()
{
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
            b[i].first = abs(a[i] - a[i+1]);
            b[i].second = i;
            sum += b[i].first;
        }
        if (sum == 0){
            cout<<1<<endl<<1<<endl;
            continue;
        }

        if (sum%2!=0){
            cout<<-1<<endl;
            continue;
        }
        sum /= 2;
        sort(b+1, b+n+1);

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

        ll k = v.size();
        if (k == n or k == 0){
            cout<<-1<<endl;
            continue;
        }

        sort(v.begin(), v.end());
        cout<<k<<endl;
        for (ll i = 0; i<k; i++){
            cout<<v[i]<<' ';
        }
        cout<<endl;

        for (ll i = 0; i<=n+1; i++){
            a[i] = b[i].first = b[i].second = 0;
        }
    }
}
