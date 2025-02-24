#include <iostream>
#include <cmath>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long
using namespace std;


int main(){
    int d,t;

    string s,a,san;

    cin >> t;


    while(t--){
        cin >> s >> d;
        a = s.substr(0,s.size() / 2);



        san = s.substr(s.size() / 2 + 1);

        int int_a = stoi(a);

        int int_san = stoi(san);

        int_san+=d;


        while(int_san >= 60){
            int_san-=60;
            int_a++;
            if(int_a >= 24){
                int_a-=24;
            }
        }

        string str_san = to_string(int_san);

        if(str_san.size() == 1){
            str_san = '0' + str_san;
        }

        cout << int_a << ':' << str_san << "\n";

    }

}
