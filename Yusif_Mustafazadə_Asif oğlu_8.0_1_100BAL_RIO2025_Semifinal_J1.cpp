#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <map>
#define ll long long
#define db double
#define bl bool
#define ch char
#define sg string
#define vc vector
#define st set
#define mst multiset
#define mp map
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t,n,m,num,ans1,ans2;
    sg time;
    cin>>t;
    for(int c=0;c<t;c++)
    {
        cin>>time>>num;
        n=stoll(time.substr(0,2)),m=stoll(time.substr(3));
        ans2=(m+num)%60,ans1=(n+(m+num)/60)%24;
        if(ans1==0)
        {
            cout<<"00";
        }
        else if(ans1<10)
        {
            cout<<0<<ans1;
        }
        else
        {
            cout<<ans1;
        }
        cout<<":";
        if(ans2==0)
        {
            cout<<"00";
        }
        else if(ans2<10)
        {
            cout<<0<<ans2;
        }
        else
        {
            cout<<ans2;
        }
        cout<<"\n";
    }
}
