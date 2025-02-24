//azxantrop

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
// #define int long long
#define mod 1000000007

signed main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);

    int tt,a,res;
    cin >> tt;
    while(tt--){
        res=1;
        cin >> a;
        vector<int> qutu(a);
        vector<int> val(a);
        for(int &i: qutu) cin >> i;
        for(int &i:val) cin >> i;
        sort(qutu.begin(),qutu.end());
        sort(val.begin(),val.end());

        for(int i = 0; i<a; i++){
            auto j = upper_bound(val.begin(),val.end(), qutu[i]) - 1 -val.begin();
            res = (res * (j+1-i))%mod;
        }
        cout << res << "\n";

    }

    return 0;
}
