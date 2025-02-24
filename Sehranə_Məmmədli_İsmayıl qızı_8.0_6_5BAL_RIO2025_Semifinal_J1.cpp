#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,d;
    cin>>t;
    int ss,dd;
  while(t--){
        char s[5];
    for(int i=0;i<5;i++){
        cin>>s[i];
    }
    char  n=s[0],m=s[1],f=s[3],j=s[4];
    int b=n-'0',c=m-'0',e=f-'0',l=j-'0';
    ss=b*10+c;
    dd=e*10+l;
    if(ss>24 || dd>59){break;}
    cin>>d;
   if(dd+d>=60){
        ss++;
        dd=(dd+d)-60;
        if(ss==24){
    cout<<"00";
    cout<<":"<<"0"<<dd<<endl;
continue;
        }

    cout<<ss<<":"<<"0"<<dd<<endl;}
    else{
        dd=dd+d;

    cout<<ss<<":"<<"0"<<dd<<endl;
    }

}}
