#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#define ll long long
using namespace std;
int main()
{   int n,t,say=0,cem=0,ans=0;
    string s,s2,s3;
    cin>>t;
    while(t--)
    {
        cin>>s>>n;
        s2=s.substr(0,2);
        s3=s.substr(3,2);
        int m2=stoi(s2);
        int m3=stoi(s3);
        m3+=n;
        m2+=m3/60;
        m3%=60;
        if(m2>=24)
            m2%=24;
        if(m2<10)
            cout<<"0"<<m2<<':';
        if(m2>=10)
            cout<<m2<<':';
        if(m3<10)
            cout<<"0"<<m3<<endl;
        if(m3>=10)
            cout<<m3<<endl;
    }
}
