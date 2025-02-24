#include <bits/stdc++.h>
using namespace std;
int main()
{
    long n, s, d, t;
    char p;
    cin>>n;
    for (int i=0; i<n; i++)
    {
        cin>>s>>p>>d>>t;
        d+=t;
        if (d>=60)
        {
            s+=(d/60);
            d%=60;
        }
        if (s>=24)
        {
            s%=24;
        }
        cout<<s<<p<<d<<endl;
    }
}
