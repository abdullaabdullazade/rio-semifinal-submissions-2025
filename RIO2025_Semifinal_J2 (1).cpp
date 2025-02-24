#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
ll t;
ll bb=pow(10,9)+7;
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
    sort(a,a+n);
    sort(b,b+n);
    ll b1[n];
    for(int i=0;i<n;i++){
            b1[i]=0;
        for(int j=0;j<n;j++){
            if(b[i]<=a[j]){
              b1[i]++;
            }
        }
    }
    sort(b1,b1+n);
ll k=0,ans=1;
for(int i=0;i<n;i++){
    b1[i]-=k;
    k++;
    ans=ans%bb;
    ans*=b1[i];
    ans=ans%bb;
    }
    cout<<ans<<endl;
}
}
