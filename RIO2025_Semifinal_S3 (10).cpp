#include <bits/stdc++.h>
#define en '\n'
#define pb push_back
#define mod 1000000007
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long ll;
using namespace std;
const int sz=2e5+5;
ll a[sz], b[sz];
int main()
{
    ios;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll sum=0;
        set<ll>s;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            s.insert(a[i]);

        }
        if(s.size()==1){
            cout<<1<<en<<1<<en;
        }
        else{
        for(int i=0; i<n-1; i++)
        {
            b[i]=abs(a[i]-a[i+1]);
            sum+=b[i];
        }
        b[n-1]=abs(a[n-1]-a[0]);
        sum+=b[n-1];
        vector<ll>v;
        bool bol=1;
        for(int i=0; i<(1<<n); i++)
        {
            ll suma=0;
            for(int j=0; j<n; j++)
            {
                if(i&(1<<j))
                {
                    suma+=b[j];
                    v.pb(j+1);
                }
            }
            if(suma==sum-suma)
            {
                cout<</*suma<<' '<<sum<<' '<<*/v.size()<<en;
                for(auto x: v)
                {
                    cout<<x<<' ';
                }
                cout<<en;
                bol=0;
                break;
                //  return;
            }
            v.clear();
        }
        if(bol) cout<<-1<<en;
    }
    }
}
