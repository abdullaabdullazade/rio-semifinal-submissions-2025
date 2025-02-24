#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
	string s,s1,s2;
    int n,k,p,tn;
    cin>>tn;
    while(tn--)
    {
        cin>>s>>n;
        k=(int(s[0])-48)*10+int(s[1])-48;
        p=(int(s[3])-48)*10+int(s[4])-48;
        ll m=n%60;
        ll h=n/60;
        ll son1=0,son2=0;
        son2+=m+p;
        while(son2>=60)
        {
            son2-=60;
            son1++;
        }
        son1+=k+h;
		son1=son1%24;
        if (son1<10 && son2<10)
            cout<<"0"<<son1<<":0"<<son2<<endl;
        else if (son1<10)
            cout<<"0"<<son1<<":"<<son2<<endl;
        else if (son2<10)
            cout<<son1<<":0"<<son2<<endl;
        else
            cout<<son1<<":"<<son2<<endl;
    }
}


