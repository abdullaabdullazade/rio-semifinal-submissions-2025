#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,d;
        char c;
        cin>>a>>c>>b>>d;
        int f=b;
        b=(d+b)%60;
        a=((f+d)/60+a)%24;
        if(b<10){
            cout<<a<<c<<0<<b<<endl;
        }
        else{
             cout<<a<<c<<b<<endl;
        }

    }
}
