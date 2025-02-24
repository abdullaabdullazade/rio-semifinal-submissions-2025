#include<bits/stdc++.h>
using namespace std;

signed main(){
    int t;
    cin >> t;
    string s;
    int d;
    while(t--){
        cin >> s >> d;
        int hour = (s[0] - '0') * 10 + s[1] - '0',min = (s[3] - '0') * 10 + s[4] - '0';
        min += d;
        hour += min / 60;
        min %= 60;
        hour %= 24;
        string cavab = "";
        cavab += (hour / 10 % 10) + '0';
        cavab += (hour % 10) + '0';
        cavab += ":"; 
        cavab += (min / 10 % 10) + '0';
        cavab += (min % 10) + '0';
        cout << cavab << endl;
    }
}