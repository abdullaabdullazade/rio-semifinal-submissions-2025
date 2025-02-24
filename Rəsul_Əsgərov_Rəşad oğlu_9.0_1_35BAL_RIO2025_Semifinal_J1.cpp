//Batman will cook them!
// bool Primemode=true;
// bool Batmanmode=true;
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define ins insert
#define ff first
#define ss second

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    string s;
    int n;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>s>>n;
        string ss="",dd="",l,m;
        int st,dq,x,y;
        ss+=s[0];
        ss+=s[1];
        dd+=s[3];
        dd+=s[4];
        st=stoi(ss);
        dq=stoi(dd);
        x=n/60;
        y=n%60;
        if(dq+y<60)
            dq+=y;
        else if(dq+y>=60)
        {
            st++;
            dq=dq+y-60;
        }
        st+=x;
        if(st>=24)
            st=st-24;
        l=to_string(st);
        m=to_string(dq);
        if(l.size()==1)
        {
            l+='0';
            reverse(l.begin(), l.end());
        }
         if(m.size()==1)
        {
            m+='0';
            reverse(m.begin(), m.end());
        }
        cout<<l<<":"<<m<<endl;
    }
}
