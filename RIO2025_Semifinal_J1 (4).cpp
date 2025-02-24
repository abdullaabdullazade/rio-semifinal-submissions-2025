#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        int h,m;
        char x;
        cin>>h>>x>>m;
        int d;
        cin>>d;
        if(d>=60)
        {
            h = h + d/60;
            d = d%60;
            m = m+d;


        }
        else if(d<60)
        {
            m = m+d;
        }

        if(m>59)
        {
            h = h + m/60;
            m = m%60;
        }
        if(h>=24)
        {
            h = h%24;
        }
        if(m<10)
        {
            if(h<10)
            {
                cout<<0<<h<<':'<<0<<m<<endl;
            }
            else
            {
                cout<<h<<':'<<0<<m<<endl;
            }
        }
        if(h<10 and m>9)
        {
            cout<<0<<h<<':'<<m<<endl;
        }
        if(h>9 and m>9)
        {
            cout<<h<<':'<<m<<endl;
        }


    }
}
