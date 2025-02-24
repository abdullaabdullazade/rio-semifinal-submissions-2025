#include<bits/stdc++.h>
using namespace std;
#define int long long
#define all(v) v.begin(), v.end()

const int sz = 2e5 + 2, inf = 1e9 + 7;
int l, r;

bool pal(int x)
{
    string s = to_string(x);
    int n = s.size();
    for(int i = 0; i < n / 2; i++)
    {
        if(s[i] != s[n - i - 1]) return 0;
    }
    return 1;
}

void solve()
{
    cin >> l >> r;
    while(l <= r)
    {
        if(pal(l)) cout << "Palindrome!" << '\n';
        else cout << l << '\n';
        l++;
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while(t--) solve();
}
