#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
using namespace std;
int main(){
    fast;
    ll n,m;
    cin>>n>>m;
    ll a[m],b[m];
    for(ll i=0;i<m;i++){
        cin>>a[i];
    }
    for(ll i=0;i<m;i++){
        cin>>b[i];
    }
    ll minn=100000000000000;
    for(ll i=0;i<m;i++){
        for(ll j=0;j<m;j++){
            minn=min(minn,max(a[i],b[j])-min(a[i],b[j]));
        }
    }
    cout<<minn;
}
