#include <iostream>
#include <cmath>
#include <algorithm>
#include <set>
#include <map>
#include <string>
#include <cstring>
#include <vector>
#include <unordered_set>
#include <deque>
#include <queue>
#include <stack>
using namespace std;
using ll=long long;
using db=double;
using ld=long double;
using str=string;
using bl=bool;
#define vc vector
#define st set
#define mst multiset
#define mp map
#define uost unordered_set
#define dq deque
#define pq priority_queue
#define cp cout.precision
#define ts to_string
#define INF 1e9
int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        str s;
        ll d;
        cin>>s>>d;
        str hour="",minute="";
        ll ptr=0;
        while (s[ptr]!=':')
        {
            hour+=s[ptr];
            ptr++;
        }
        ptr++;
        while (ptr<s.size())
        {
            minute+=s[ptr];
            ptr++;
        }
        ll h=stoi(hour),m=stoi(minute);
        h+=d/60;
        d%=60;
        m+=d;
        if (m>59)
        {
            m-=60;
            h++;
        }
        if (h>23)
            h%=24;
        hour=ts(h);
        minute=ts(m);
        for (int i=0; i<2-hour.size(); i++)
            cout<<'0';
        cout<<hour<<':';
        for (int i=0; i<2-minute.size(); i++)
            cout<<'0';
        cout<<minute<<endl;
    }
}
