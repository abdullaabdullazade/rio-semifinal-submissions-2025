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
        int a,b;
        int x;
        char c1,c2,c3,c4;
        c1=s[0];
        c2=s[1];
        c3=s[3];
        c4=s[4];
        int time=(c1-48)*10+(c2-48);
        int minute=(c3-48)*10+(c4-48);
        int ans_time=time,ans_minute=minute;
        ans_minute+=d;
        while(ans_minute>=60)
        {
            ans_minute-=60;
            ans_time++;
            if(ans_time>=24)
            {
                ans_time-=24;
            }
        }
        if(ans_time<=9)
        {
                cout<<"0"<<ans_time;
        }
        else{
            cout<<ans_time;
        }
        cout<<":";
        if(ans_minute<=9)
        {
            cout<<"0"<<ans_minute;
        }
        else
        {
            cout<<ans_minute;
        }
        cout<<endl;

    }

    return 0;
}
