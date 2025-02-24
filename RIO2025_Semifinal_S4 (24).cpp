#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    //cin>>t;
    t = 1;
    while (t--){
        int n, k;
        cin>>n>>k;
        vector<int> no(n + 1, 1);
        set<vector<int>> se;
        vector<vector<int>> v(n + 1, vector<int>(k + 1));
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= k; j++){
                cin>>v[i][j];
            }
            sort(v[i].begin(), v[i].end());
            se.insert({v[i][1], i});
        }
        ll ans = se.rbegin()->at(0) - se.begin()->at(0);
        while (1){
            auto el = *se.begin();
            se.erase(el);
            no[el[1]]++;
            int ind = el[1];
            if (no[ind] > k) break;
            se.insert({v[ind][no[ind]], ind});
            ll val = se.rbegin()->at(0) - se.begin()->at(0);
            ans = min(ans, val);
        }
        cout<<ans<<"\n";
    }
}
