#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h, m, d, s;
    char x;
    cin>>s;
    while(s>0)
    {
        cin>>h>>x>>m>>d;
        h=h+d/60;
        m=m+(d%60);
        h=h+(m/60);
        m=(m%60);
        h=h%24;
        cout<<h/10<<h%10<<":"<<m/10<<m%10<<endl;
        s--;
    }
}
