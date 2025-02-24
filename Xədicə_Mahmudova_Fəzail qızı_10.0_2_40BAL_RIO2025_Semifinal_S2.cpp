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
        for(ll i=0;i<n;i++){
            cin>>a[i];
            if(i!=0){
                if(abs(a[i]-a[i-1])!=1){
                    say++;
                }
            }
        }
        cout<<say+1<<endl;

    }

}
