#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int s, d, a, k, m, r,b;
        char w;
        w= ':';
        cin>>s>>w>>d>>a;
        k= a%60;
        m= a/60;
        s= s+m;
        d= d+k;
        r= d%60;
        b= d/60;
        s= s+b;
        d=r;
        s= s%24;
        d= d%60;
        if(s< 10 and d< 10)
        {
            cout<<"0" << s << w << "0" << d;
            cout<<endl;
        }
        else if(s < 10 and d >= 10)
        {
            cout<< "0" << s << w << d ;
            cout<<endl;
        }
        else if(s>=10 and d<10)
        {
            cout<< s << w<< "0" << d;
            cout<<endl;
        }
        else if(s >=10 and d >= 10)
        {
            cout<< s << w << d ;
            cout<<endl;
        }

    }
}
