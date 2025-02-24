#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t=1;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int d;
        cin>>d;
        int x;
        char c1,c2,c3,c4;
        c1=s[0];
        c2=s[1];
        c3=s[3];
        c4=s[4];
        int time=(c1-48)*10+(c2-48);
        int minute=(c3-48)*10+(c4-48);
        int a,b;
        int pt,pm;
        pt=d/60;
        pm=d%60;
        a=time;
        b=minute;
        b+=pm;
        if(b>=60)
        {
            pt+=b/60;
            b%=60;
        }
        a+=pt;
        if(a>=24)
        {
            a%=24;
        }
        if(a<=9)
        {

            cout<<"0"<<a<<":";
        }
        else{
            cout<<a<<":";
        }
        if(b<=9)
        {
            cout<<"0"<<b;
        }
        else
        {
            cout<<b;
        }
        cout<<endl;

    }

    return 0;
}
