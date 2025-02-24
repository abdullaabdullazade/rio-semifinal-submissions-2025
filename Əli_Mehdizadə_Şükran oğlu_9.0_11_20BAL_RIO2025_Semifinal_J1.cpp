#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int cnt;
    int hour;
    char dd;
    int minute;
    int delay;
    int minlay=0;

    cin>>cnt;
    for(int i = 0 ; i<cnt ; i++)
    {
        cin>>hour;
        cin>>dd;
        cin>>minute;
        cin>>delay;

        minlay= minute+delay;
        if(minlay >=60){
            minute=minlay-60;
            hour+=1;

        }
        else
        {
            minute+=delay;
        }


        if (hour>= 24)
        {
            hour=hour-24;
        }
         if(hour>=10 && minute>=10)
        {
            cout<<hour<<":"<<minute<<endl;
        }

        else if(hour<10 && minute<10)
        {
            cout<<"0"<<hour<<":"<<"0"<<minute<<endl;
        }

         else if(hour>=10 && minute<=10)
        {
            cout<<hour<<":"<<"0"<<minute<<endl;
        }
        else if(hour<10 && minute>=10)
        {
            cout<<"0"<<hour<<":"<<minute<<endl;
        }


    }




}
