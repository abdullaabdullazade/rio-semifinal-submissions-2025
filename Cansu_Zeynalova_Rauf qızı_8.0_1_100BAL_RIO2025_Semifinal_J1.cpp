#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int t;
    long long d;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s>>d;
        long long h=stoi(s.substr(0,2));
        long long m=stoi(s.substr(3,4));
        m+=d;
        h+=m/60;
        m=m%60;
        h=h%24;
        if(h<10)
        {
            cout<<0;
        }
        cout<<h<<':';
        if(m<10)
        {
            cout<<0;
        }
        cout<<m<<'\n';
    }
}
