#include <bits/stdc++.h>
#include <string>
#define vll vector <ll>
#define pb push_back
#define in insert
#define all(a) a.begin(), a.end()
#define ll long long
using namespace std;
void solve()
{
    ll l,r;
    cin >> l >> r;
    for(ll i = l; i <= r; i++)
    {
        string t = to_string(i);
        string s = "";
        for(ll j = t.size() - 1;j >= 0;j--)
            s += t[j];
        bool is = 0;
        for(ll j = 0;j < t.size();j++)
            if(s[j] != t[j])
        {
            is = 1;
            break;
        }
        if(is == 0)
            cout << "Palindrome!";
        else
            cout << i;
        cout << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    // cin >> t;
    while(t--)
        solve();

}
