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
    int a[k], b[k];
    for(int i = 0; i < k; i++) {
        cin>>a[i];
    }
    for(int i = 0; i < k; i++) {
        cin>>b[i];
    }
    for(int i = 0; i < k; i++) {
        for(int j = 0; j < k; j++) {
            ans = min(ans, abs(a[i] - b[j]));
        }
    }
    cout<<ans<<endl;

    return 0;
}
