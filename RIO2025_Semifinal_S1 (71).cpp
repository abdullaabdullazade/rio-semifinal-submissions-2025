#include <bits/stdc++.h>
using namespace std;
int main ()
{
    long long l,r;
    cin>>l>>r;
    for(l;l<=r;l++)
    {
        long long a=l/10;
        long long b=l%10;
        long long c=l/100%10;
        long long e=l%100;
        long long d=a/10;
        
        long long h=l/100;
        long long g=l%100;
      
        
        if(a==c || a==b || e==d ||h==g )
        {
            cout<<"Palindrome!"<<endl;
        }
         
        else cout<<l<<endl;
    }
  return 0;
}