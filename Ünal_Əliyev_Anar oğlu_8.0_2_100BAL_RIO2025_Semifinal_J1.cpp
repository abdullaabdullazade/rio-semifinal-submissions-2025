
#include <iostream>
#include <iomanip>

using namespace std;

void calculate_start_time(int h, int m, int delay){
     m += delay;
     h+= m/60;
     m%= 60;
     h%= 24;
    cout<<setw(2)<<setfill('0')<<h<<':'<<setw(2)<<setfill('0')<<m<<endl;

}

int main()
{
   int t;
   cin>>t;
   while(t--){
    int h, m, delay;
        char colon;
        cin>>h>>colon>>m>>delay;
        calculate_start_time(h, m, delay);



   }

   return 0;

}
