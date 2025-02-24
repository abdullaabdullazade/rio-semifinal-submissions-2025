#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio();
    cin.tie(0); cout.tie(0);

   int t; cin >> t;
   while(t--){
    int m, k; cin >> m;
    char c; cin >> c; cin >> k;
    int n; cin >> n;
    if(k + n >= 60){
        m += (k  + n) / 60;
        k = (k + n) % 60;
        if(m >= 24){
                m -= 24;
        }
    }
    else {
            if(m == 24) m = 0;
            k += n;
    }
    if(m <= 9 and k <= 9) cout << '0' << m << ':' << '0' << k << endl;
    else if(m <= 9 and k > 9) cout << '0' << m << ':' << k << endl;
    else if(m > 9 and k <= 9) cout << m << ':' << '0' << k << endl;
    else cout << m << ':' << k << endl;
   }
}
