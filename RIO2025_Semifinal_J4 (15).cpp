#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int main()
{
    fast;
    ll t;
    cin>>t;
    ll n;
    while(t--) {
        cin>>n;
        ll k[n];
        for(int i=0; i<n; i++) {
            cin>>k[i];
        }
        if(n==3) {
            if((k[0]<=k[1] and k[1]<=k[2]) || (k[1]<=k[2] and k[2]<=k[0]) || (k[2]<=k[0] and k[0]<=k[1])) {
                cout<<"Yes"<<endl;
            }
            else
                cout<<"No"<<endl;
        }
        else {
            if(n%4==0) {
                cout<<"Yes"<<endl;
            }
            else
                cout<<"No";
        }
    }
    return 0;
}
// 1 2 3     3 1 2      2 3 1