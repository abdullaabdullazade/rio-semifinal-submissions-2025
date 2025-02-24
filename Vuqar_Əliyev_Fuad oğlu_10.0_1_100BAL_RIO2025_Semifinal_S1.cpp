#include <bits/stdc++.h>
#define int long long
using namespace std;
void ALIYEFFw()
{
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        int flag=0;
        int x=i;
       string s=to_string(i);
       for(int i=0;i<s.size();i++)
       {
           if(s[i]!=s[s.size()-i-1])
           {
                flag=1;
           }
       }
       if(flag==1)
       {
           cout<<x<<endl;
       }
       else
       {
           cout<<"Palindrome!"<<endl;
       }
    }
}
signed main()
{
    int t=1;
    //cin>>t;
    while(t--)
    {
        ALIYEFFw();
    }
}
