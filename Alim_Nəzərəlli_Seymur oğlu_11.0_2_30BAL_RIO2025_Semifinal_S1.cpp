#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ll n,m;
cin>>n>>m;
for(ll i=n;i<=m;i++){
    ll t=0;
    ll b=i,c;
    while(b!=0){
    c=b%10;
    t*=10;
    t+=c;
    b/=10;
    }
    if(t==i){
        cout<<"Palindrome!\n";
    }
    else{
        cout<<i<<endl;
    }
}
}
