#include <bits/stdc++.h>
using namespace std;
int a[2];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        long long d;
        cin>>s>>d;
        int a, b, h,m;
        a=(int(s[0])-48)*10 + int(s[1])-48;
        b=(int(s[3])-48)*10 + int(s[4])-48;
        m=(d%60+b)%60;
        h=(d/60+a+ (d%60+b)/60)%24 ;

        if(h<10)
        {
            cout<<0<<h<<":";
        }
        else
        {
            cout<<h<<":";
        }
        if(m<10)
        {
            cout<<0<<m<<endl;
        }
        else
        {
            cout<<m<<endl;
        }
    }
}
