#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long
#define vl vector<int>
int n , m , k;
void solve()
{
      cin >> n;
      vl v(n);
      for(int i = 0 ; i < n ; i++)cin >> v[i];
      vl x , y;
      for(int i = 0 ; i < n ; i++)x.pb(v[i]) , y.pb(v[i]);
      sort(x.begin() , x.end());
      reverse(y.begin() , y.end());
      int c = 0 , c1 = 0 ;
      for(int i = 0 ; i < n ; i++)
      {
          if(x[i] == y[i])c++;
          if(x[i] == v[i])c1++;
      }
      if(c == n || c1 == n)cout << 1 << endl;
      else cout << 2 << endl;
}
signed main()
{
    int t;
    cin >> t;
    while(t--)solve();
}
