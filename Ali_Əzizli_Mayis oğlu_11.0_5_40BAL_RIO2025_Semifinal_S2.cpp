#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--) {
        int n, ans = 0;
        cin>>n;
        int a[n + 1], b[n];
        for(int i = 0; i < n; i++) {
            cin>>a[i];
            b[i] = a[i];
        }
        sort(b, b + n);
        map<int, int> m;
        for(int i = 0; i < n; i++) {
            m.insert({b[i], i + 1});
        }
        for(int i = 0; i < n; i++) {
            a[i] = m[a[i]];
        }

        if(a[n-1] != 1) {
            a[n] = 0;
        }
        if(a[n-1] != n) {
            a[n] = n+1;
        }
        for(int i = 1; i <= n; i++) {
            if(abs(a[i] - a[i - 1]) > 1) {
                ans++;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
