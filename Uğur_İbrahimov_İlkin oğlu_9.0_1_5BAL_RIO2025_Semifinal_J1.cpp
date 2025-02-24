#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
        cin>>t;
        while(t--){
            string n;
            cin>>n;
            long long a;
            cin>>a;
            int b,c;
            b=n[0]*10-528+n[1];
            c=n[3]*10+n[4]-528;
            int k=0;
            int hour=b+k;
            int minute=c+a;
            if(minute>=60){
             hour+=minute/60;
            }
            if(hour>24){
                hour=hour-24;
            }

            if(minute<10){
                                    cout<<hour<<":"<<0<<minute<<endl;
            }
            else{
                    cout<<hour<<":"<<minute<<endl;
        }
}
}

