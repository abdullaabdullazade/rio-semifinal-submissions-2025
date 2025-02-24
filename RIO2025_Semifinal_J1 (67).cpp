#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>
#include <deque>
#include <string>

using namespace std;



int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int ss, dd, add;
        string time;
        char q;
        cin >> ss >> q >> dd;
        cin >> add;

        int hours = floor(add / 60);
        int minutes = add % 60;

        int ss_new = ss + hours;
        int dd_new = dd + minutes;

        if (dd_new >= 60){
            dd_new -= 60;
            ss_new += 1;
        }

        int amnt24 = floor(ss_new / 24);

        if (ss_new >= 24){
            ss_new -= 24 * amnt24;
        }

        if(ss_new % 10 == ss_new && dd_new % 10 == dd_new){
                cout << "0" << ss_new << ":" << "0" << dd_new << endl;
        }
        else if(ss_new % 10 != ss_new && dd_new % 10 == dd_new){
            cout << ss_new << ":" << "0" << dd_new << endl;
        }
        else if(ss_new % 10 == ss_new && dd_new % 10 != dd_new){
            cout << "0" << ss_new << ":" << dd_new << endl;
        }
        else{
            cout << ss_new << ":" << dd_new << endl;
        }

    }



    return 0;
}
