#include "bits/stdc++.h"
using namespace std;
#define long long int;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n;
        cin>>n;
        int hours,mins,x,y;
        hours = n/60;
        mins = n%60;
        int a,b,c,d;
        a = s[0] - '0';
        b = s[1] - '0';
        c = s[3] - '0';
        d = s[4] - '0';
        x = a*10 + b;
        y = c*10+d;
        int z = x+hours + (y+mins)%60;
        if((z%24) >= 10){
            cout<<z%24;
        }
        else{
            cout<<'0'<<z%24;
        }
        cout<<':';
        if(((y+mins)%60) >= 10){
            cout<<(y+mins)%60<<endl;
        }
        else{
            cout<<'0'<<(y+mins)%60<<endl;
        }
    }




}
