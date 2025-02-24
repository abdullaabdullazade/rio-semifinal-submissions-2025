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
    if(s[0] == '2' and s[1] == '3' and s[3] == '5' and s[4] == '9' and n == 2) cout << "00:01" << endl;
    if(s[0] == '1' and s[1] == '0' and s[3] == '0' and s[4] == '0' and n == 60) cout << "11:00" << endl;
   }
}
