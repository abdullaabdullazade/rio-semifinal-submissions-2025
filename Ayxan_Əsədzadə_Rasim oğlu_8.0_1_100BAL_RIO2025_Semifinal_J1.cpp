#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
        ll b=24*60;
    string s;
    cin>>s;
     ll n;
     cin>>n;
     string s1="";
     s1+=s[0];
     s1+=s[1];
     string s2="";
     s2+=s[3];
     s2+=s[4];
     ll time=0;
     time+=(s1[0]-48)*10*60;
     time+=(s1[1]-48)*60;
     time+=(s2[0]-48)*10;
     time+=(s2[1]-48);
     time+=n;
     time%=b;
     ll a1=time/60;
     ll a2=time%60;
     if(a1<10) cout<<0;
     cout<<a1;
     cout<<':';
     if(a2<10) cout<<0;
     cout<<a2;
     cout<<endl;
     }
}
