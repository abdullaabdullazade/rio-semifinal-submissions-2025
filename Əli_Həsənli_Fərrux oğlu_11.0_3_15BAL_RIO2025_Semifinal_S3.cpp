#include<bits/stdc++.h>
using namespace std;
void solve(vector<long long>b,long long n)
{
    long long sum=0;
    for(int i=0;i<n;i++)
        sum+=b[i];
    if(sum%2)
    {
        cout<<-1<<endl;
        return;
    }
    sum/=2;
    for(long long mask=1;mask<(1<<n);mask++)
    {
        //cout<<"A"<<endl;
        long long cem=0;
        vector<long long>ind;
        for(long long i=0;i<n;i++)
            if((1<<i)&mask)
            {
                cem+=b[i];
                ind.push_back(i);
            }
        if(cem==sum)
        {
            cout<<ind.size()<<endl;
            for(long long i:ind)
                cout<<i+1<<" ";
            cout<<endl;
            return;
        }
    }
    cout<<-1<<endl;
    return;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long a[n];
        for(long long i=0;i<n;i++)
            cin>>a[i];
        vector<long long>b(n);
        for(long long i=0;i<n-1;i++)
            b[i]=abs(a[i]-a[i+1]);
        b[n-1]=abs(a[n-1]-a[0]);
        solve(b,n);
    }
    return 0;
}
