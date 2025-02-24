#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define io ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
int i, j;

void solve(){
    int ss, dd, time;
    char c = ':';
    cin >> ss >> c >> dd >> time;
    string s = to_string(ss);
    string d = to_string(dd);
    if ( d == "00" && s == "23" && time == 60 ){
        cout << "00:00" << endl;//23:00
        return;
    }
    if ( d == "00" && s != "23" ) {
        cout << ss + 1 <<':'<<dd << endl;// 21:00
        return;
    }
    if ( s == "23" && d != "00" ){
        if ( (dd + time - 60) / 10 % 10 != 0 ){
            cout << "00:" << dd + time - 60 << endl;//23:35
            return;
        }
        cout << "00:0" << dd + time - 60 << endl;//23:35

    }
    else{
        if ( dd + time < 60 ) {
            cout << ss + 1 << ':' << dd + time << endl;
            return;
        }
        if ( dd + time == 60 ) {
            cout << ss + 1 << ":00" << endl;
            return;
        }
        if ( dd + time > 60 && dd + time - 60 < 10 ) {
            cout << ss + 1 << ":0" << dd + time - 60 << endl;
            return;
        }
        if ( dd + time > 60 && dd + time - 60 >= 10 ) {
            cout << ss + 1 << ':' << dd + time - 60 << endl;
            return;
        }
    }
}

signed main()
{
    io
    int tt = 1;
    cin >> tt;
    while ( tt-- ) solve();
}
























//sUxWJQM7e
