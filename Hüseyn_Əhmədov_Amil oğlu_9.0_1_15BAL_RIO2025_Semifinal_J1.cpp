#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t,d,h,m,a;
    cin>>t;
    char c;
    while (t--){
    cin>>h>>c>>m>>d;
    a=h*60+m;
    a=a+d;
    if (a>1440)
        a=a-1440;
    if (a<600 && a%60<10){
    cout<<"0"<<a/60<<":"<<"0"<<a%60<<endl;
    }
    else if(a<600)
        cout<<"0"<<a/60<<":"<<a%60<<endl;
    else if(a%60<10)
        cout<<a/60<<":"<<"0"<<a%60<<endl;

    else
        cout<<a/60<<":"<<a%60<<endl;

    }
}
