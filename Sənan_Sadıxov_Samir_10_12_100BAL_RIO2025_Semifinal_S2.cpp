#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int a[n+2];
        for (int i = 1; i<=n; i++) cin>>a[i];
        a[n+1] = a[1];
        int b[n+1];
        int cem = 0;
        for (int i = 1; i<=n; i++) {
            b[i] = abs(a[i]-a[i+1]);
            cem+=b[i];
        }
        if (cem%2!=0) {
            cout<<-1<<endl;
            continue;
        }
        bool ok = false;
        for (int i = 0; i<(2<<n)-1; i++) {
            bitset<23>bt(i);
            vector<int>v,z;
            map<int,stack<int>>mp;
            int cemv = 0,cemz = 0;
            for (int j = 0; j<n; j++) {
                if (bt[j]==1) {
                    v.emplace_back(b[j+1]);
                    cemv+=b[j+1];
                    mp[b[j+1]].push(j+1);
                }
                else {
                    z.emplace_back(b[j+1]);
                    cemz+=b[j+1];
                }
            }
            if (cemv==cemz && v.size()!=0 && z.size()!=0) {
                ok = true;
                cout<<v.size()<<endl;
                for (int i = 0; i<v.size(); i++) {
                    cout<<mp[v[i]].top()<<" ";
                    mp[v[i]].pop();
                }
                cout<<endl;
                break;
            }
        }
        if (ok==false) cout<<-1<<endl;
    }
}
