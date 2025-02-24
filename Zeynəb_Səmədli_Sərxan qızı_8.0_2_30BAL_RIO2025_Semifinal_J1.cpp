#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <queue>
#include <stack>
using namespace std;
using ll=long long;
#define vc vector
#define pb push_back
#define sortv sort(v.begin(),v.end())
#define sorts  sort(s.begin(),s.end())
#define sorta sort(a,a+n)
int main()
{
    ll t;
    cin>>t;
    ll n;
    vc<ll>v;
    while(t--)
    {
        ll h,m;
        ll d;
        char c;
        cin>>h>>c>>m>>d;
        ll h1=-1;
        ll m1=0;
        ll say=0;
        m+=d;
        m1=m%60;
        m=(m-m1)/60;
        h+=m;
        if(h>23)
        {
            h=h%23;
        }
        if(h<10)
        {

            cout<<'0'<<h;
        }
        else
        {
            cout<<h;
        }
        cout<<':';
        if(m1<10)
        {

            cout<<'0'<<m1;
        }
        else
        {

            cout<<m1;
        }
        cout<<endl;
    }
}
