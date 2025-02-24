#include <bits/stdc++.h>
#define MAX 1000000009

using namespace std;

int main()
{
    ios_base::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);

    int n, k, ans = MAX;
    cin>>n>>k;
    int a[n][k];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < k; j++) {
            cin>>a[i][j];
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < k; j++) {
            for(int i1 = i + 1; i1 < n; i1++) {
                for(int j1 = 0; j1 < k; j1++) {
                    ans = min(ans, abs(a[i][j] - a[i1][j1]));
                }
            }
        }
    }
    cout<<ans<<endl;

    return 0;
}
