#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long t,d,c,v,v1;
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
     int a=stoi(a1);//1
     int aa=stoi(a2);//2
     int b=stoi(b1);//0
     int bb=stoi(b2);//0
     c=a*10+aa;//SAAT
     v=b*10+bb;//deqiqe
     if(v+d>=60)
       {
            c+=1;
        v1=abs(v+d-60);
     }
     else if (v+d<60)
        {v1=v+d;}
        if(c+1>24)
            {cout<<"00"<<":0"<<v1<<endl;}
            else {cout<<c<<":0"<<v1<<endl;}

}
}
