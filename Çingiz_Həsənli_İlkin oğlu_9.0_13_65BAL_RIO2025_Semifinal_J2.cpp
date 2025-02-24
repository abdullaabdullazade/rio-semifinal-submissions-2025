#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define MRBEAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
ll const MOD = 1e9+7;
int main(){

    MRBEAST

    ll t;
    cin>>t;
    while(t--){
        ll n, ans = 1;
        cin>>n;
        set<ll>s;
        vector<ll>v, v1(n);
        vector<ll>dp(n, 0);
        for(int i = 0; i<n; i++){
            ll u;
            cin>>u;
            s.insert(u);
        }
        for(auto i = s.begin(); i!=s.end(); i++){
            ll u = *i;
            v.push_back(u);
        }
        for(int i = 0; i<n; i++){
            cin>>v1[i];
            for(int j = 0; j<n; j++){
                if(v[j] >= v1[i]){
                    dp[j]++;
                }
            }
        }
        for(int i = 0; i<n; i++){
            ans = (ans * (dp[i] - i)) % MOD;
        }
        cout<<ans<<endl;
    }

}
