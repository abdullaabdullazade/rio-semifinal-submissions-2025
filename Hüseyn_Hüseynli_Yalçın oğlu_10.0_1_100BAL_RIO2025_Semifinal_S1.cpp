#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long
#define vl vector<int>
int n , m , k;
bool pal(int n)
{
    string s = to_string(n);
    string x = s;
    reverse(x.begin() , x.end());
    if(x == s)return true;
    else return false;
}
void solve()
{
     int l , r;
     cin >> l >> r;
     for(int i = l ; i <= r ; i++)
     {
         if(pal(i))cout << "Palindrome!"<< endl;
         else cout << i << endl;
     }
}
signed main()
{
    int t = 1;
    while(t--)solve();
}
