#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, k;
    cin>>n>>k;
    long long a[k], b[k];
    long long l1=0, l2=0;
    for(long long i=0; i<k; i++)
    {
        cin>>a[i];
    }
    for(long long i=0; i<k; i++)
    {
        cin>>b[i];
    }
    long long ans=1000000007;
    for(long long i=0; i<k; i++)
    {
        for(long long j=0; j<k; j++)
        {
            long long c=a[j]-b[i];
            if(c<0)
            {
                c*=-1;
            }
            ans=min(ans, c);
        }
    }
    cout<<ans;
}
