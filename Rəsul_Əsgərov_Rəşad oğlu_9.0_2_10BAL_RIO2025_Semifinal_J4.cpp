#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }
        if(a[0]<=a[1] && a[1]<=a[2] ||
           a[0]<=a[1] && a[1]>=a[2] && a[2]<=a[0] ||
           a[0]>=a[1] && a[1]<=a[2] && a[2]<=a[0])
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}
