#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long t,d,c,v,v1,e,f;
	string s,a1,a2,b1,b2;
	cin>>t;
	while(t--)
    {
     cin>>s;//12:00
     cin>>d;//60
     a1=s[0];//1
     a2=s[1];//2
     b1=s[3];//0
     b2=s[4];//0
     long long a=stoi(a1);//1
     long long aa=stoi(a2);//2
     long long b=stoi(b1);//0
     long long bb=stoi(b2);//0
     c=a*10+aa;//SAAT
     v=b*10+bb;//deqiqe
     if(v+d>=60)
       {
           e=d/60;
           f=d%60;
           if(e!=0)
            c+=e;
            else c+=1;
            if (d%60==0)
        v1=abs(v+f);
        else v1=abs(v+f-60);
     }
     else if (v+d<60)
        {v1=v+d;}
        if(c+1>24)
            {cout<<"00"<<":0"<<v1<<endl;}
            else {cout<<c<<":0"<<v1<<endl;}

}
}
