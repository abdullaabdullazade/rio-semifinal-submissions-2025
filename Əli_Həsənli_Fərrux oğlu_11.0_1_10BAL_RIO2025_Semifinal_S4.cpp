#include<bits/stdc++.h>
using namespace std;
void solve(vector<long long>b,long long n)
{

    return;
}
int main()
{
        int n,k;
        cin>>n>>k;
        vector<long long>v[n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<k;j++)
            {
                int x;
                cin>>x;
                v[i].push_back(x);
            }
        }
        long long d=1000000000000000000;
        for(int i=0;i<k;i++)
            for(int j=0;j<k;j++)
                d=min(d,abs(v[0][i]-v[1][j]));
        cout<<d;
    return 0;
}
