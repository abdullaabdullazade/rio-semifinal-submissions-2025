#include <bits/stdc++.h>
#define en '\n'
#define pb push_back
#define mod 1000000007
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long ll;
using namespace std;
const int sz=2e5+5;
ll a[sz];
int main()
{
    ios;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, cnt=0, cntp=0;
        cin>>n;
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        for(int i=2; i<n; i++)
        {
            if((a[i]<=a[i-1] and a[i]>=a[i+1]) or (a[i]>=a[i-1] and a[i]<=a[i+1]))
            {
                cntp++;
            }
            else
            {
                cnt++;
            }
        }
        cout<<cnt+1<<en;
    }
}
