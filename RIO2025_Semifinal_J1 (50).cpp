#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a,b;
    char g;
    cin>>a>>g>>b;
    int h;
    cin>>h;
    b+=h;
    if(b>59)
    {
        b%=60;
        a+=1;
    }
    if(a>23)
    {
        a%=24;
    }
    string j="",k="";
    if(b<10)
    {
        j="0";
    }
    if(a<10)
    {
        k="0";
    }
    cout<<k<<a<<g<<j<<b<<'\n';
}
int main()
{

    int t=1;
    cin>>t;
    while(t--)solve();
}

