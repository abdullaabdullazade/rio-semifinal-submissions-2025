#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()

void code(){
    ll n;
    cin>>n;
    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++){
        cin>>a[i];
    }
    for (ll i = 0; i < n; i++){
        cin>>b[i];
    }
    sort(all(a));
    sort(all(b));
    ll res = 1;
    for (ll i = 0; i < n; i++){
        ll ind = upper_bound(all(b), a[i]) - b.begin() - i;
        if (ind <= 0){
            cout<<0<<endl;
            return;
        }
        res *= ind;
    }
    cout<<res<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll tcs = 1;
    cin>>tcs;
    while (tcs--){
        code();
    }
}
