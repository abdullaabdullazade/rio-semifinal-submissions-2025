#include<bits/stdc++.h>
#define ll long long
#define all(x) x.begin(),x.end()
const ll mod=1e9+7;
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll sum=0;
        vector<ll> v(n);
        vector<ll> v1;
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        for(ll i=1;i<n;i++){
            sum+=v[i-1]-v[i];
            if(v[i-1]-v[i]>0){
                v1.push_back(i);
            }
        }
        sum+=v[n-1]-v[0];
        if(v[n-1]-v[0]>0){
                v1.push_back(n);
            }
        if(sum!=0) cout<<-1<<'\n';
        else{
                if(v1.size()==0){
                    cout<<1<<'\n'<<1<<'\n';
                    continue;
                }
            cout<<v1.size()<<'\n';
            for(ll i:v1){
                cout<<i<<' ';
            }
        cout<<'\n';
        }
    }
}
