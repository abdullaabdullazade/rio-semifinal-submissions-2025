#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define vl vector<ll>
#define vi vector<int>
#define pll pair<ll, ll>
#define pii pair<int, int>
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define sz(v) (ll)(v.size())
#define pb push_back
#define f first
#define s second
using namespace std;
void solve()
{
    ll l, r;
    cin >> l >> r;
    for(ll i = l; i <= r; i++)
    {
        string s = to_string(i);
        string s1 = s;
        reverse(all(s1));
        if(s == s1)
            cout << "Palindrome!\n";
        else
            cout << i << "\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll tests = 1;
    //cin >> tests;
    while(tests--)
    {
        solve();
    }
}
