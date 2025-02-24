#include <bits/stdc++.h>
using namespace std;
int a,b;
void solve()
{
    cin>>a;
    vector<int> mas(a),v(a);
    for(int i=0;i<a;i++)cin>>v[i];
    for(int i=0;i<a;i++)cin>>mas[i];
    sort(v.begin(),v.end());
    sort(mas.begin(),mas.end());
    int ans=1;
    for(int i=0;i<a;i++)
    {
        auto y=upper_bound(mas.begin(),mas.end(),v[i]);
        if(y-mas.begin()==0)
        {
            cout<<0<<'\n';
            return;
        }
        ans*=y-mas.begin()-i;
    }
    cout<<ans<<'\n';
}
int main()
{

    int t=1;
  cin>>t;
    while(t--)solve();
}

