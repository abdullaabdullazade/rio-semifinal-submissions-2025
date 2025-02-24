#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ll t,n;
  cin>>t;
  while(t--)
  {
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    if(n==3)  // 1 3 2 no 2 1 3 no 3 2 1 no 
    {
      if((a[0]<=a[1] and a[1]>=a[2]) or (a[0]>=a[1] and a[2]>=a[1] and a[2]>=a[0]) or (a[0]>=a[1] and a[1]>=a[2]))
      cout<<"No"<<endl;
      else 
      cout<<"Yes"<<endl;
    }
    else
    {
     if(n%4==0 or n%4==1)
     cout<<"Yes"<<endl;
     else cout<<"No"<<endl;
    }
  }
}