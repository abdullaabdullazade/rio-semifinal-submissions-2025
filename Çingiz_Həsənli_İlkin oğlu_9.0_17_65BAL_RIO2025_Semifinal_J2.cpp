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
        ll n, ans = 1, w = 0;
        cin>>n;
        multiset<ll>s;
        vector<ll>dp(n, 0);
        for(int i = 0; i<n*2; i++){
            ll u;
            cin>>u;
            if(i < n){
                s.insert(u);
            }
            else{
                for(auto j = s.begin(); j!=s.end(); j++){
                    if(*j >= u){
                        dp[w]++;
                    }
                    w++;
                }
                w = 0;
            }
        }
        for(int i = 0; i<n; i++){
            ans = (ans * (dp[i] - i)) % MOD;
            if(ans < 0){
                ans = 0;
            }
        }
        cout<<ans<<endl;
    }

}
