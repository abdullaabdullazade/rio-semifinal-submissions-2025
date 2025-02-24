#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
ll c,b;
cin>>c;
cin>>b;
for(ll i=c;i<b+1;i++){
    ll a=i;
    ll cop=a;
    ll na=0;
    ll k=1;
    bool t=0;
    while(true){
        a=a/10;
        k=k*10;
        if(a==0){
            break;
        }
    }
    k=k/10;
    //cout<<k<<endl;
    a=cop;
   // cout<<a<<endl;
    while(true){
        na=(a%10)*k+na;
        a=a/10;
        k=k/10;
        if(a==0){
            break;
        }
    }
    if(na==cop){
        t=1;
    }
    if(t==1){
        cout<<"Palindrome!"<<endl;
    }
    else{
        cout<<cop<<endl;
    }
   // cout<<k<<" "<<na<<" "<<cop;
}
}


