#include <bits/stdc++.h>
#define en '\n'
#define pb push_back
#define mod 1000000007
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long ll;
using namespace std;
const int sz=2e5+5;
int main()
{
    ios;
    ll l, r;
    cin>>l>>r;
    for(ll i=l; i<=r; i++){
        string s=to_string(i);
        string r=s;
        reverse(r.begin(), r.end());
        if(s==r) cout<<"Palindrome!"<<en;
        else cout<<i<<en;
    }
}
