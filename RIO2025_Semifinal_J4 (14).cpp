/// Author:Mahammad Mammadov ///
#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define pb push_back
#define eb emplace_back
#define mod 1000000007
using namespace std;
void solve()
{
    ll n,m,i,j,k;
    cin>>n;
    vector<ll>a(n);
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(n&1)
    {
        cout<<"YES"<<nl;
    }
    else
    {
        cout<<"NO"<<nl;
    }
}
int main()
{
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
    ll t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
