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
    int x,z,h,d=0,v,t;
    char y;
    cin>>x>>y>>z>>h;
    int q=z+h;
if(q>=60)
{
    x+=q/60;
     t=q%60;

}
else
t=q;
if(x>=24)
{while(x>23)
x-=24;}
v=x;

   string l= to_string(v);
   string r=to_string(t);
   if(l.size()==1&&r.size()==1)
   {
       cout<<0<<l<<y<<0<<r<<endl;
   }else if(l.size()==1&&r.size()==2)
             cout<<0<<l<<y<<r<<endl;
else if(l.size()==2&&r.size()==2)
             cout<<l<<y<<r<<endl;

else if(l.size()==2&&r.size()==1)
  cout<<l<<y<<0<<r<<endl;

/*int t;
cin>>t;
while(t--)
{
    int n,d=0,f=0;
    cin>>n;

    int a[n+5],b[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];

    }
bool ok =true;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(b[j]<=a[i])
                d++;
        }
        swap(a[i],a[i+1]);
       if(d==0)
        {ok=false;
            cout<<0<<'\n';
            break;
        }

    }if(ok)
    cout<<d<<'\n';*/

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

