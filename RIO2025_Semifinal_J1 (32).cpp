#include <bits/stdc++.h>

using namespace std;

int main()
{
     long long t;
     cin>>t;
     while(t--){
        long long h, m, d;
        char c;
        cin>>h>>c>>m>>d;
        long long time=h*60+m;
        time+=d;
        if(time/60%24<10&&time%60<10)cout<<"0"<<time/60%24<<":"<<"0"<<time%60<<endl;
        else if(time/60%24>=10&&time%60<10)cout<<time/60%24<<":"<<"0"<<time%60<<endl;
        else if(time/60%24<10&&time%60>=10)cout<<"0"<<time/60<<":"<<time%60<<endl;
        else cout<<time/60%24<<":"<<time%60<<endl;
     }
}
