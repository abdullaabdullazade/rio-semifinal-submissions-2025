#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) v.begin(), v.end()
#define ull unsigned long long
#define nl '\n'
#define pb push_back
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define pll pair<ll, ll>
#define heap ll, vector<ll>, greater<ll>
const ll sz=2e5+5, inf=1e18, mod=1e9+7;
void solve(){
    ll n, k;
    cin>>n>>k;
    ll a[n][k];
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            cin>>a[i][j];
        }
    }
    /*
        2 3
        2 1 8
        5 4 7
    */
    if(n==2){
        vector<ll> v;
        for(int i=0;i<k;i++){
            ll x=a[0][i];
            for(int j=0;j<k;j++){
                v.pb(abs(a[1][j]-x));
            }
        }
        //for(auto i: v) cout<<i<<" ";
        //cout<<nl;
        cout<<*min_element(all(v));
    }
}
signed main(){
    fast;
    ll t=1;
    //cin>>t;
    for(ll cs=1; cs<=t; cs++){
        solve();
    }
}
/*
    Author : Omar Aliyev
*/
