#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()

void code(){
    ll n,m;
    cin>>n>>m;
    vector<vector<char>> v(n+1, vector<char>(m+1, 0));
    vector<ll> sumi(n+1, 0);
    vector<ll> sumj(m+1, 0);
    for (ll i = 1; i <= n; i++){
        for (ll j = 1; j <= m; j++){
            cin>>v[i][j];
            sumi[i] += v[i][j] - '0';
            sumj[j] += v[i][j] - '0';
        }
    }
    ll res = 0;
    for (ll i = 1; i <= n; i++){
        for (ll j = 1; j <= m; j++){
            ll sum1 = sumi[i] - (v[i][j] - '0');
            ll sum2 = sumj[j] - (v[i][j] - '0');
            if ((sum1 == 0 and sum2 == 0) or (sum1 == m-1 and sum2 == n-1)){
                res++;
            }
        }
    }
    cout<<res<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll tcs = 1;
    //cin>>tcs;
    while (tcs--){
        code();
    }
}
