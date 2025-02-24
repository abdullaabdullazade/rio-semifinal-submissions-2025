#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        int d;cin>>d;
        int x=s[0]-48,y=s[1]-48,z=s[3]-48,l=s[4]-48;
        int a=x*36000,b=y*3600,c=z*600,e=l*60;
        int n=a+b+c+e+(d*60);
        n%=86400;
        if(n%3600==0 && 3600<n){
            cout<<n/3600<<":"<<"00"<<'\n';
            continue;
        }
        if(n==3600){
            cout<<"01:00"<<'\n';
            continue;
        }
        if(n<3600){
            cout<<"00:";
            if(n/60>=10)cout<<n/60<<'\n';
            else cout<<"0"<<n/60<<'\n';

        }
        if(n>3600){
            if(n/3600>=10)cout<<n/3600;
            else cout<<"0"<<n/3600<<":";
            n%=3600;
            if(n>=600)cout<<n/600<<'\n';
            if(n<600)cout<<"0"<<n/60<<'\n';
        }


    }
}
