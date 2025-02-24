#include <bits/stdc++.h>

using namespace std;

bool check(string s) {
    int n = s.size();
    for(int i = 0; i < n / 2; i++) {
        if(s[i] != s[n - i - 1]) {
            return false;
        }
    }
    return true;
}


int main()
{
    ios_base::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--) {
        int n, ans = 1;
        bool f1 = false, f2 = false;
        cin>>n;
        int a[n], b[n];
        for(int i = 0; i < n; i++) {
            cin>>a[i];
            b[i] = a[i];
        }
        sort(b, b + n);
        for(int i = 0; i < n; i++) {
            if(a[i] != b[i]) {
                f1 = true;
            }
        }
        reverse(a, a + n);
        for(int i = 0; i < n; i++) {
            if(a[i] != b[i]) {
                f2 = true;
            }
        }
        if(f1 == 1 && f2 == 1) {
            cout<<2<<endl;
        }
        else {
            cout<<1<<endl;
        }
        /*/*if(a[n-1] != 1) {
            a[n] = 0;
        }
        if(a[n-1] != n) {
            a[n] = n+1;
        }
        for(int i = 1; i < n; i++) {
            if(abs(a[i] - a[i - 1]) != 1) {
                ans++;
            }
        }
        cout<<ans<<endl;*/
    }

    return 0;
}
