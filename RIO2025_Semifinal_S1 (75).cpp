#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    long long l,r,k,t,d;
    cin>>l>>r;
  vector<int> v;
  vector<int> m{0};
  for(int i=l; i<=r; i++)
  {
      v.push_back(i);
  }

  for(int i=0; i< v.size(); i++)
  {
          t = v[i];
          while(t>0)
          {
           d = t%10;
           m[i] = d+m[i]*10;
          t =t/10;
          }

      if(v[i]<10)
      {
          cout<<"Palindrome!"<<endl;
      }
      else if(v[i]%10 == 0)
      {
          cout<<v[i]<<endl;
      }

      else if(v[i] != m[i])
          {
              cout<<v[i]<<endl;
          }

     else
          {
          cout<<"Palindrome!"<<endl;
          }
  }
   return 0;
}



