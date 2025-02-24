#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ll n,m,s;
  cin>>n>>m;
  char c;
  ll g[n][m];
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
     cin>>c;
     if(c=='1')
     g[i][j]=1;
     else g[i][j]=0;
    }
  }
  ll a[n],b[m];
  for(int i=0;i<n;i++)
  {
    s=0;
    for(int j=0;j<m;j++)
    {
      s+=g[i][j];  
    }
    a[i]=s;
  }
  for(int i=0;i<m;i++)
  {
    s=0;
    for(int j=0;j<n;j++)
    {
      s+=g[j][i];  
    }
    b[i]=s;
  }
  s=0;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      if(g[i][j]==1)
      {
        if((a[i]==1 and b[j]==1) or (a[i]==m and b[j]==n))
        s++;
      }
      else
      {
        if((a[i]==0 and b[j]==0) or (a[i]==m-1 and b[j]==n-1))
        s++;
      }
    }
  }
  cout<<s<<endl;
}