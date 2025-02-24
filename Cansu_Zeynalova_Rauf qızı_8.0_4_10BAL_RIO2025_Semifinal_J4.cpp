#include <bits/stdc++.h>
using namespace std;
long long const mod=1e9+7;
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int t; cin>>t;
    while(t--)
    {

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(a[0]==*min_element(a,a+n) && a[2]==*max_element(a,a+n))
    {
        cout<<"Yes\n";
    }
    else if(a[0]==*max_element(a,a+n) && a[1]==*min_element(a,a+n))
    {
        cout<<"Yes\n";
    }
    else if(a[1]==*max_element(a,a+n) && a[2]==*min_element(a,a+n))
    {
        cout<<"Yes\n";
    }
    else
    {
        cout<<"No\n";
    }
    }
}
