#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        vector<int>b(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int A[n]={0};
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(a[i]>=b[j])
                {
                    A[i]++;
                }

            }
        }
        int sum=1;
        for(int i=0; i<n; i++)
        {
           sum*=(A[i]-i);
        }
        cout<<sum<<endl;
    }
}
