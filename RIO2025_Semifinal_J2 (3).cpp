#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#define ll long long
using namespace std;
int main()
{   int n,t;
    cin>>t;
    while(t--)
    {
        int say=0,cem=1;
        cin>>n;
        int a[n];
        int b[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=0; i<n; i++)
            cin>>b[i];
        sort(a,a+n);
        sort(b,b+n);
        for(int i=0; i<n; i++)
        {
            say=-i;
            for(int j=0; j<n; j++)
            {
                if(a[i]>=b[j])
                    say++;
            }
            cem*=say;
        }
        cout<<cem<<endl;
    }
}
