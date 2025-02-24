#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#define ll long long
using namespace std;
int main()
{   int n,a,b,c,t;
    string s,s2,s3;
    cin>>t;
    while(t--)
    {
        int say=0,cem=1,ans=1;
        bool c=true;
        cin>>n;
        int a[n],b[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=0; i<n; i++)
            cin>>b[i];
        sort(a,a+n);
        sort(b,b+n);
        for(int i=0; i<n; i++)
        {
            if(a[0]>=b[n-1])
            {
                ans*=(i+1);
                c=false;
            }
        }
        if(c)
        {
            for(int i=0; i<n; i++)
            {
                say=-i;
                for(int j=0; j<n; j++)
                {
                    if(a[i]>=b[j])
                        say++;
                }
                cem*=say;
                say=0;
            }
            cout<<cem<<endl;
        }
        else
            cout<<ans<<endl;
    }
}
