/* :) */
#include <bits/stdc++.h>
using namespace std;
//#define endl '\n'
#define ll long long
#define pll pair<ll, ll>
const int sz = 1e5+5;
ll a[sz], b[sz];

int main()
{
    ll q, n;
    cin>>q;
    while (q--){
        cin>>n;
        map<ll, ll>mp;
        for (ll i = 1; i<=n; i++){
            cin>>a[i];
            b[i] = a[i];
        }
        sort(b+1, b+n+1);
        for (ll i = 1; i<=n-1; i++){
            mp[b[i]] = b[i+1];
        }
        mp[b[n]] = -1;

        ll x = 1, cnt = 0;
        for (ll i = 2; i<=n; i++){
            if (a[i] < a[i-1]){
                if (mp[a[i]] == a[i-1]){
                    x++;
                }
                else {
                    x = 1;
                    cnt++;
                }
            }
            else {
                if (mp[a[i-1]] == a[i]){
                    x++;
                }
                else {
                    x = 1;
                    cnt++;
                }
            }
        }
        if (x) cnt++;
        cout<<cnt<<endl;
    }





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
