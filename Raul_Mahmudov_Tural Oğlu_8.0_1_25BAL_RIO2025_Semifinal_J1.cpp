#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define F first
#define S second

signed main()

{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

int n,mn=LONG_MAX,mx=LONG_MIN;
cin>>n;
while(n--)
{
    int x,z,h;
    char y;
    cin>>x>>y>>z>>h;
    int d=x*60;
    int q=d+h+z;
    if(q/60>=24&&q/60-24<10&&q%60<10)
    {
    cout<<0<<q/60-24<<':'<<0<<q%60<<endl;

    }else if(q/60<10&&q%60<10)cout<<0<<q/60<<':'<<0<<q%60<<endl;
    else if(q/60>=24&&q/60-24>=10&&q%60>=10)
       cout<<q/60-24<<':'<<q%60<<endl;
    else if(q/60>=10&&q%60>=10)
              cout<<q/60<<':'<<q%60<<endl;
    else if(q/60>=24&&q/60-24>=10&&q%60==0)
          cout<<q/60-24<<':'<<0<<q%60<<endl;
    else if(q/60<10&&q%60==0)
    {
        cout<<0<<q/60<<':'<<0<<q%60<<endl;
    }
     else if(q/60>=10&&q%60==0)
    {
        cout<<q/60<<':'<<0<<q%60<<endl;
    } else if(q/60<10&&q%60>=10)
    {
        cout<<0<<q/60<<':'<<q%60<<endl;
    }


 /*int w;
 if(q%60==0)
 {
     w=q/60;
 }else
 {
     w=q/60+w%60;
     cout<<w<<endl;
 }if(w>=24)
 {
     cout<<w-24<<endl;
 }
 else
    cout<<w;*/

}
}
