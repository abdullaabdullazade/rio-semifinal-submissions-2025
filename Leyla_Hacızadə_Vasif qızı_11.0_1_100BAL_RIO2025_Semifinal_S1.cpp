/* :) */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define pll pair<ll, ll>

int main()
{
    ll l, r;
    cin>>l>>r;
    for (ll i = l; i<=r; i++){
        string s = to_string(i);
        string b = s;
        reverse(b.begin(), b.end());
        if (b == s){
            cout<<"Palindrome!"<<endl;
        }
        else {
            cout<<i<<endl;
        }
    }
}
