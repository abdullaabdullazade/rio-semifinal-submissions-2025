#include <iostream>
#include <algorithm>
#include <cmath>
#include <climits>
#include <iomanip>
#include <set>
#include <queue>
#define ll long long
#define mpr make_pair
#define pb push_back
#define in insert
#define svt sort(vt.begin(), vt.end())
using namespace std;
bool palindrome(string &s)
{
    string str = s;
    reverse(str.begin(), str.end());
    if(s == str)
    {
        return true;
    }
    return false;
}
int main()
{
    ll l, r;
    cin >> l >> r;
    string s;
    for(ll i = l; i <= r; i++)
    {
        s = to_string(i);
        if(palindrome(s))
        {
            cout << "Palindrome!";
        }
        else
        {
            cout << i;
        }
        cout << "\n";
    }
}
