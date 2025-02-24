#include <iostream>
using namespace std;
int main()
{
     int t;
     cin>>t;
     int s,d,g;
     char a;
     while (t>0)
     {
     t--;
        cin>>s>>a>>d>>g;
        if(g>=60 and d+g%60<60)
        {
            s=s+g/60;
            d=d+g%60;

        }
        else if(g>=60 and d+g%60>=60)
        {
            d=d+g%60-60;
            g=g-g%60;
            s=s+g/60+1;
        }
        else if( g<60 and d+g<60)
        {

            d=d+g;
        }
        else if(g<60 and d+g>=60)
        {
            d=d+g-60;
            s=s+1;
        }

        if(s>=24)
        s=s-24;
        if(s<10 and d<10)
         {
            cout<<'0'<<s<<':'<<'0'<<d<<endl;
            continue;
        }
        else if(s>9 and d>9){
        cout<<s<<':'<<d<<endl;
        continue;
        }

        else if (s>9 and d<10){
        cout<<s<<':'<<'0'<<d<<endl;
        continue;
        }
        else if (s<10 and d>9){
        cout<<'0'<<s<<':'<<d<<endl;
        continue;
        }

     }
}
