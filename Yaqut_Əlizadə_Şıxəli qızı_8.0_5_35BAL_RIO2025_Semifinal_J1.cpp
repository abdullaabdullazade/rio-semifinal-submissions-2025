#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio();
    cin.tie(0); cout.tie(0);

   int t; cin >> t;
   while(t--){
    string s; cin >> s;
    int n; cin >> n;
    int s1 = s[0] - '0';
    int s2 = s[1] - '0';
    int s3 = s[3] - '0';
    int s4 = s[4] - '0';
    int n1 = s1 * 10 + s2;
    int n2 = s3 * 10 + s4;
    if(n2 + n >= 60){
        n1 += (n2  + n) / 60;
        n2 = (n2 + n) % 60;
        if(n1 >= 24){
                n1 -= 24;
        }
    }
    else {
            if(n1 == 24) n1 = 0;
            n2 += n;
    }
    if(n1 <= 9 and n2 <= 9) cout << '0' << n1 << ':' << '0' << n2 << endl;
    else if(n1 <= 9 and n2 > 9) cout << '0' << n1 << ':' << n2 << endl;
    else if(n1 > 9 and n2 <= 9) cout << n1 << ':' << '0' << n2 << endl;
    else cout << n1 << ':' << n2 << endl;
   }
}
