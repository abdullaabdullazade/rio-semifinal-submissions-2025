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

     int a,b;
     cin >> a >> b;
     set<int> st;
     for(int i = a;i<=b;i++)
     {
         string s = to_string(i);
         int cnt = 0;
         for(int i = 0;i<s.size();i++)
         {
            if(s[i] != s[s.size() - 1- i])
            {
                cnt++;
            }
         }
         if(cnt == 0)
         {
             cout << "Palindrom" << endl;
         }
         else
         {
             cout << i << endl;
         }

     }






}
