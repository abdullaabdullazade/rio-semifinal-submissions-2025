#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
        cin>>t;
        while(t--){
            string s;
            cin>>s;
            int n;
            cin>>n;
            int a,b,c,d;
            int hour,mins,x,y;
            hour=n/60;
            mins=n%60;
            a=s[0]-'0';
            b=s[1]-'0';
            c=s[3]-'0';
            d=s[4]-'0';
            while(d+mins>=10){
                c++;
                mins=mins-10;
            }
            while(c>=6){
                b++;
                c-=6;
            }
            while(b+hour>=10){
                a++;
                hour=hour-10;
            }
            while(a>=2 && b>=4){
                a-=2;
                b-=4;
            }
            cout<<a<<b+hour<<":"<<c<<d+mins<<endl;
}
}
