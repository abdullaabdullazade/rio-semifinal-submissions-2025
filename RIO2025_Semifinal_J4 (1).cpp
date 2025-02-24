#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(n==3){
        if(a[0]<=a[1] and a[1]<=a[2]){
            cout<<"Yes"<<endl;
        }
        else if(a[1]<=a[2] and a[2]<=a[0]){
            cout<<"Yes"<<endl;
        }
        else if(a[2]<=a[0] and a[0]<=a[1]){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}
}
