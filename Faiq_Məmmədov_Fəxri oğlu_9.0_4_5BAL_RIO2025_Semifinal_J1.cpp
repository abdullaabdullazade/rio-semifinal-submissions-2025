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
        while(d + mins >= 10){
            c++;
            mins = mins - 10;
        }
        while(c >= 6){
            b++;
            c -=6;
        }
        while(b + hours >= 10){
            a++;
            hours = hours - 10;
        }
        while((a >=2 and b >=4) or a >3){
            a -=2;
            b -=4;
        }
        cout<<a<<b+hours<<':'<<c<<d+mins<<endl;
    }




}
