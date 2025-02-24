#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
   long long  t;
   cin>>t;
   long long  a,b,c;
   char l;
   while(t--){
    cin>>a>>l>>b>>c;
    c=c%1440;
    long long  time=a*60+b+c;
    if(time/60 <=23){
            if(time%60<10 && time/60<10){
                cout<<0<<time/60<<":"<<0<<time%60<<endl;
            }
            else if(time%60<10 && time/60>=10){
                cout<<time/60<<":"<<0<<time%60<<endl;
            }
            else if(time%60>=10 && time/60<10){
                 cout<<0<<time/60<<":"<<time%60<<endl;
            }
            else{
                cout<<time/60<<":"<<time%60<<endl;

            }

    }
    else {

         if(time%60<10 && time/60-24<10){
                cout<<0<<time/60-24<<":"<<0<<time%60<<endl;
            }
            else if(time%60<10 && time/60-24>=10){
                cout<<time/60-24<<":"<<0<<time%60<<endl;
            }
            else if(time%60>=10 && time/60-24<10){
                 cout<<0<<time/60-24<<":"<<time%60<<endl;
            }
            else{
                cout<<time/60-24<<":"<<time%60<<endl;

            }
    }

   }


}
