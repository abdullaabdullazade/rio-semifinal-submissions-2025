#include<bits/stdc++.h>
#define AI ios_base::sync_stdio_with(0);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;//11:18 cry :((((((((((
void check(ll x)
{
    string a,a1,a2;
    a=to_string(x);
    a1="";
    a2="";
    ll n=a.size();
    for(ll i=0;i<a.size()/2;i++)
    a1+=a[i];
    for(ll i=n-1;i>=n/2+n%2;i--)
    a2+=a[i];
  //  cout<<a1<<' '<<a2<<endl;
    if(a1==a2)
    cout<<"Palindrome!";
    else
    cout<<x;
    cout<<endl;
}
int main()
{
    ll l,r,i;
    cin>>l>>r;
    for(i=l;i<=r;i++)
    check(i);
}
