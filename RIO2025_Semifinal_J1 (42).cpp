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
    int x,z,h,d=0,t;
    char y;
    cin>>x>>y>>z>>h;
    int q=z+h;
if(q>=60)
{
    x+=q/60;
     t=(z+h)-(q/60*60);

}
else
z+=h;
if(x>=24)
    cout<<x-24<<y<<t<<endl;
else cout<<x<<y<<z<<endl;






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
