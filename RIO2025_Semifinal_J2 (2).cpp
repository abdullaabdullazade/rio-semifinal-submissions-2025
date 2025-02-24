#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    ll bb=1000000007;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        ll b1[n];
        sort(a,a+n);
        sort(b,b+n);
        if(a[n-1]<b[n-1]){
            cout<<0<<endl;
        }
        else{
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(b[i]<=a[j]){
                    b1[i]=n-j;
                    break;
                }
            }
        }
        reverse(b1,b1+n);
        ll k=0,ans=1;
        for(int i=0;i<n;i++){
            ans*=(b1[i]-k)%bb;

            k++;
        }
        cout<<ans<<endl;}
    }
}
