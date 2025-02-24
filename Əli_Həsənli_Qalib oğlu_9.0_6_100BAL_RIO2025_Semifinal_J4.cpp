#include <bits/extc++.h>
#include <bits/stdc++.h>
using namespace std;
using namespace __gnu_pbds;
#define ll long long
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
int main() 
{
    ll t;
    cin>>t;
    while(t--)
    {
        ordered_set s;
        ll n; 
        cin>>n;
        ll a[n+1];
        for(ll i=1;i<=n;i++) 
        {
            cin>>a[i];
            s.insert(a[i]);
        }
        if(s.size()<n) 
        {
            cout<<"Yes"<<endl;
            continue;
        }
        s.clear();
        ll ans=0;
        for(ll i=n;i>=1;i--) 
        {
            s.insert(a[i]);
            ans+=s.order_of_key(a[i]);
        }
        if(ans%2==0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}