#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define MRBEAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int const MOD = 1e9+7;
int main(){

    MRBEAST

    int t;
    cin>>t;
    while(t--){
        int n, ans = 1;
        cin>>n;
        vector<int>v(n), v1(n);
        vector<int>dp(n, 0);
        for(auto &i : v){
            cin>>i;
        }
        for(int i = 0; i<n; i++){
            cin>>v1[i];
            for(int j = 0; j<n; j++){
                if(v[j] >= v1[i]){
                    dp[j]++;
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
