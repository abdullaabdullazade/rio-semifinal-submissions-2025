#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    long long l,r,k,m,h,t,d;
    cin>>l>>r;
  vector<int> v;
  for(int i=l; i<=r; i++)
  {
      v.push_back(i);
  }

  for(int i=0; i< v.size(); i++)
  {
      if(v[i]<10)
      {
          cout<<"Palindrome!"<<endl;
      }
      else if(v[i]%10 == 0)
      {
          cout<<v[i]<<endl;
      }
else
{
    m=v[i];
    h=0;
    d= v[i]%10;
    k=h*10+d;
    v[i]/=10;
    if(k == v[i])
    {
          cout<<"Palindrome!"<<endl;
    }
    else
    {
        cout<<m<<endl;
    }
}
  }
   return 0;
}

