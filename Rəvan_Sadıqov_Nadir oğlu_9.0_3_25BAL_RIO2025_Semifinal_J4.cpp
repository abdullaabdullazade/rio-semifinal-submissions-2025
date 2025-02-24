#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()

void code(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++){
        cin>>v[i];
    }
    if (n == 3){
        ll a = v[0];
        ll b = v[1];
        ll c = v[2];
        if (a <= b and b <= c){
            cout<<"Yes\n";
            return;
        }
        if (b <= c and c <= a){
            cout<<"Yes\n";
            return;
        }
        if (c <= a and a <= b){
            cout<<"Yes\n";
            return;
        }
        cout<<"No\n";
        return;
    }
    bool ciddiAzalan = 1;
    for (ll i = 1; i < n; i++){
        if (v[i-1] <= v[i]){
            ciddiAzalan = 0;
            break;
        }
    }
    if (ciddiAzalan){
        if (n % 4 == 0 or n % 4 == 1) cout<<"Yes\n";
        else cout<<"No\n";
        return;
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll tcs = 1;
    cin>>tcs;
    while (tcs--){
        code();
    }
}
