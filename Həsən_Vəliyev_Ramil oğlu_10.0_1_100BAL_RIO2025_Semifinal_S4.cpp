#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        vector<int> v(n + 1, 0);
        vector<vector<int>> so;
        for (int i = 1; i <= n; i++){
            cin>>v[i];
            so.push_back({v[i], i});
        }
        sort(so.begin(), so.end());
        for (int i = 0; i < n; i++){
            v[so[i][1]] = i + 1;
        }
        int no = 1, ans = 0;
        while (no <= n){
            if (no == n){
                ans++;
                break;
            }
            int di = v[no] - v[no + 1];
            if (di < 0) di = -1;
            else di = 1;
            no++;
            while (1){
                if (no > n){
                    ans++;
                    break;
                }
                if (v[no - 1] - v[no] != di){
                    ans++;
                    break;
                }
                no++;
            }
        }
        cout<<ans<<"\n";
    }
}
