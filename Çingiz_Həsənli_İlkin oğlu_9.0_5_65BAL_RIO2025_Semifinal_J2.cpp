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
        vector<ll>v(n), v1(n);
        for(auto &i : v){
            cin>>i;
        }
        for(auto &i : v1){
            cin>>i;
        }
        vector<ll>dp(n, 0);
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                if(v[i] >= v1[j]){
                    dp[i]++;
                }
            }
        }
        sort(dp.begin(), dp.end());
        for(int i = 0; i<n; i++){
            ans = (ans * (dp[i] - i)) % MOD;
        }
        cout<<ans<<endl;
    }

}
