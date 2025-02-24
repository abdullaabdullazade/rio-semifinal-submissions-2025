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
    ll l = -1, r = -1;
    ll res = 1;
    for (ll i = 0; i < n; i++){
        while (r < n-1 and b[r+1] <= a[i]) r++;
        l++;
        if (l > r){
            cout<<0<<endl;
            return;
        }
        res *= (r-l+1);
    }
    cout<<res % 1000000007<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll tcs = 1;
    cin>>tcs;
    while (tcs--){
        code();
    }
}
