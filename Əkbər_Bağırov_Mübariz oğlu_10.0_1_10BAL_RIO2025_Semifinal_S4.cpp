#include <bits/stdc++.h>
using namespace std;
#define all(s) s.begin(),s.end()
signed main()
{
    int n,k;
    cin >> n >> k;
    int a[n][k];
    for(int i = 0; i < n;i++){
        for(int j = 0; j < k;j++){
            cin >> a[i][j];
        }
    }
    int best = 1e9+7;
    for(int i = 0; i < k;i++){
        for(int j = 0; j < k;j++){
            best = min(best,abs(a[0][i] - a[1][j]));
        }
    }
    cout << best << endl;
}
