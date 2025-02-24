#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#define ll long long
using namespace std;
int main()
{   int n,a,b,c,t,say=0,cem=0,ans=0;
    string s,s2,s3;
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b>>c;
        if(n==3)
        {
            if(a==b ||b==c || a==c)
                cout<<"Yes"<<endl;
            else if(c>b && b>a)
                cout<<"Yes"<<endl;
            else if(a>b && a>c && c>b)
                cout<<"Yes"<<endl;
            else if(a>c && b>a)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
        else if(n%4==0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}
