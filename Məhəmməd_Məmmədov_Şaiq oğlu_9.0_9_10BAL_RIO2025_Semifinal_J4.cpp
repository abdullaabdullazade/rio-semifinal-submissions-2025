/****Author: Mahammad Mammadov ****/
#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define ull unsigned long long
#define pb push_back
#define eb emplace_back
#define INF 1000000007
#define MOD 998244353
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
    if(n%4==1 || n%4==0)
    {
        cout<<"Yes"<<nl;
    }
    else
    {
        cout<<"No"<<nl;
    }
}
/******MAIN CODE******/
int main()
{
    ios::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
/******(``````~~``````)******/
