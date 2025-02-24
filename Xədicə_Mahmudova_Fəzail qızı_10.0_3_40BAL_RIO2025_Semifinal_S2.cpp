#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
using namespace std;
int main(){
    fast;
    ll t;
    cin>>t;
    while(t--){
        ll n,say=0;
        cin>>n;
        ll a[n];
        vector<ll>v,v1,v2;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            if(i!=0){
                if(abs(a[i]-a[i-1])!=1){
                    say++;
                }
            }
            v1.push_back(a[i]);
            v.push_back(a[i]);
            v2.push_back(a[i]);
        }
        sort(v.begin(),v.end());
        sort(v2.begin(),v2.end());
        reverse(v2.begin(),v2.end());
        if(v1==v or v2==v1){
            cout<<1<<endl;
        }
        else{
            cout<<say+1<<endl;
        }
    }

}
