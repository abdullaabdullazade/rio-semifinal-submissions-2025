#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
   ll s, d, k;
   char c;
   int t;
   cin>>t;

   while(t--){
    cin>>s>>c>>d>>k;
    if(s==23&&d+k>60){
         s=k/60;
        d=(d+k)-60;
        if(d>60){
            d=((d+k)-60)/2;
        }

    }
    else if(k>=60){
        s++;
        d+=k-60;
    }
    else {
        if((d+k)>60){
            s++;
            d=(d+k)-60;

        }
        d++;
    }


   if(s<10&&d<10){
    cout<<"0"<<s<<":"<<"0"<<d<<endl;
   }
   else if(s<10){
    cout<<"0"<<s<<":"<<d<<endl;
   }
   else{
    cout<<s<<":"<<"0"<<d<<endl;
   }
   }

}
