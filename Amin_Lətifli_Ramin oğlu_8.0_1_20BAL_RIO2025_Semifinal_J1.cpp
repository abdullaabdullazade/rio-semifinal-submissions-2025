#include <iostream>
using namespace std;
int main()
{
   long long t;
   cin>>t;
   while(t>0 and t--){
    int a,b,c;
    char k;
    cin>>a>>k>>b>>c;
    b+=c;
    if(b>=60){
        a+=b/60;
        b%=60;
    }
    if(a>=24){
        a%=24;
    }
    if(a<=9)cout<<0<<a<<k;
    else cout<<a<<k;
    if(b<=9)cout<<0<<b<<endl;
    else cout<<b<<endl;
   }
}
