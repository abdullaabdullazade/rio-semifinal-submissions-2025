#include <bits/stdc++.h>
#define ll long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll n,m,say=0;
    cin>>n>>m;
    vector<string>v(n);
    for(ll i=0; i<n; i++){
        cin>>v[i];
    }

    for(ll i=0; i<n; i++){
        for(ll j=0; j<m; j++){
            ll cem=0;

            for(ll l=0; l<m; l++){
                if(j!=l){
                    cem+=v[i][l] - '0';  
                }
            }

            for(ll d=0; d<n; d++){
                if(i!=d){
                    cem+=v[d][j] - '0';  
                }
            }

            ll c = (m - 1) + (n - 1);  
    
            if(cem == 0 || cem == c){
                say++;
            }
        }
    }

    cout<<say;
    return 0;
}