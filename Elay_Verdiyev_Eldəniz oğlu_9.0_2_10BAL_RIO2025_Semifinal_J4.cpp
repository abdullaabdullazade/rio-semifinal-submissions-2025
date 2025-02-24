#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(a) a.begin() , a.end()
#define ld long double
const int inf = 1e18;
const int MAX = 1005;
const int mxN = 27;
const int mod = 998244353;
void solve(){
      int n;
      cin >> n;
      vector < int > a(n);
      for(int i = 0;i < n;i++)
      {
            cin >> a[i];
      }
      if(n % 4 == 0 or n % 4 == 1)
      {
            cout << "Yes" << endl;
      }
      else
      {
            cout << "No" << endl;
      }
}
signed main(){
      ios_base::sync_with_stdio(0);cin.tie(0);
      int T = 1;cin >> T;
      while(T--) solve();
}
