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
        long long d=1/1000%100;
        long long g=l/10000%1000;
        long long e=l/100000%10000;
        if(a==c && g==e )
        {
            cout<<"Palindrome!"<<endl;
        }
        else if(a==b)
         cout<<"Palindrome!"<<endl;
        else cout<<l<<endl;
    }
  return 0;
}