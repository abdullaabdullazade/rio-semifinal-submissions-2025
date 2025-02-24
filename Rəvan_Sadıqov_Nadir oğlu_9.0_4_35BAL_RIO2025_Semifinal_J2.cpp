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
    queue<ll> q;
    ll res = 1;
    ll r = 0;
    for (ll i = 0; i < n; i++){
        while (r < n and b[r] <= a[i]){
            q.push(b[r]);
            r++;
        }
        if (q.empty()){
            cout<<0<<endl;
            return;
        }
        res *= q.size();
        q.pop();
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
