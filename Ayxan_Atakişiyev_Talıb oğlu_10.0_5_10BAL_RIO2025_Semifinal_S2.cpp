#include <bits/stdc++.h>

using namespace std;

#define int long long
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define endl '\n'
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define gcd __gcd
const int mod = 1e9+7;
signed main()
{

     fast;


     int t;
     cin >> t;
     while(t--)
     {
         int n;
         cin >> n;
         int a[n];
         for(int i = 0 ;i<n;i++)
         {
             cin >> a[i];
         }
         if(is_sorted(a,a+n))
         {
             cout << 1 << endl;
         }
         else
         {
           reverse(a,a+n);
           if(is_sorted(a,a+n))
           {
               cout <<1 << endl;
           }
           else
           {
               cout <<2 << endl;
           }
         }
     }







}
