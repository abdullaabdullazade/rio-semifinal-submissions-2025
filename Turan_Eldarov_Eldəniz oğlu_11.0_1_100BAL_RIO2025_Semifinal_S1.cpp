#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define pb push_back
#define all(v) v.begin(), v.end()
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
using namespace std;
int mod;
int gcd(int a, int b)
{
    if(b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
int modpow(int a, int b)
{
    int ans = 1;
    while(b != 0)
    {
        if(b % 2)
        {
            ans *= a;
            ans %= mod;
        }
        a *= a;
        a %= mod;
        b /= 2;
    }
    return ans;
}
int inv(int a)
{
    return (modpow(a, mod - 2)) % mod;
}
signed main()
{
    ios_base::sync_with_stdio();cin.tie();cout.tie();
    int l, r;
    cin >> l >> r;
    for(int i = l; i <= r; i++)
    {
        bool p = 1;
        string s = to_string(i);
        for(int j = 0; j < s.length() / 2; j++)
        {
            if(s[j] != s[s.length() - j - 1])
            {
                p = 0;
                break;
            }
        }
        if(p)
        {
            cout << "Palindrome!" << endl;
            continue;
        }
        cout << i << endl;
    }
}
