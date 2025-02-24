#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define all(x) x.begin(),x.end()
using namespace std;

ll sz=1e5+7;
ll gsz=1600;
ll dpsz=1e4+7;

ll i,j;
ll mod=1e9+7;






void solve(){
    ll n;
    cin>>n;
    vector<ll>v;
    for(i=0;n>i;i++){
        ll a;
        cin>>a;
        v.pb(a);
    }
    for(i=2;v.size()>i;i++){
        if((v[i-2]<=v[i-1] && v[i-1]<=v[i]) or (v[i-2]>=v[i-1] && v[i-2]>=v[i] && v[i-1]<=v[i]) or (v[i-2]<=v[i-1] && v[i-1]>=v[i] && v[i-2]>=v[i])){
            cout<<"Yes"<<endl;
            return;
        }
    }
    cout<<"No"<<endl;
}






signed main(){
    ll t=1;
    cin>>t;
    while(t--) solve();
}
