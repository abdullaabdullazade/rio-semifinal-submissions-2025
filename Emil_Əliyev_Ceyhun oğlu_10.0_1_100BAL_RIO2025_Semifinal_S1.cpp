#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

const int N = 1e5 + 5;
const int INF = 1e18;

bool palindrome(string s)
{
    for(int i = 0; i < s.length() / 2; i++)
    {
        if(s[i] != s[s.length() - i - 1])
        {
            return false;
        }
    }
    return true;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    /// bismillah
    int l , r;
    cin >> l >> r;
    for(int i = l; i <= r; i++)
    {
        string s = to_string(i);
        if(palindrome(s))
        {
            cout << "Palindrome!" << endl;
        }
        else cout << i << endl;
    }
}
