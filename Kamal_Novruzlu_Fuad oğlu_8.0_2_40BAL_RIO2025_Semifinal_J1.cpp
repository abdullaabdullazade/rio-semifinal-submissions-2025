#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long h, m, d;
        char c;
        cin>>h>>c>>m>>d;
        long long time=h*60+m+d;
        long long hour=(time/60)%24;
        long long mn=time%60;
        if(hour>=10&&mn>=10){
            cout<<hour<<":"<<mn<<endl;
        }
        if(hour>=10&&mn<10){
            cout<<hour<<":0"<<mn<<endl;
        }
        if(hour<10&&mn<10){
            cout<<0<<hour<<":"<<0<<mn<<endl;
        }
        if(hour<10&&mn>=10){
            cout<<0<<hour<<":"<<mn<<endl;
        }
    }
}
