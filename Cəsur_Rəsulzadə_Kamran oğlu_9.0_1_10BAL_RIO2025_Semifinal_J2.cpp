#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a;
    cin>>a;
    vector<int> mas(a),v(a);
    for(int i=0;i<a;i++)cin>>mas[i];
    for(int i=0;i<a;i++)cin>>v[i];
    sort(v.begin(),v.end());
    sort(mas.begin(),mas.end());
    int op=0;
    long long ans=1;
    for(int i=0;i<a;i++)
    {
        auto y=upper_bound(v.begin(),v.end(),mas[i]);
        ans*=y-v.begin()-i;
       // cout<<ans<<'\n';
        op++;
    }
    cout<<ans<<'\n';
}
int main()
{

    int t=1;
  cin>>t;
    while(t--)solve();
}

