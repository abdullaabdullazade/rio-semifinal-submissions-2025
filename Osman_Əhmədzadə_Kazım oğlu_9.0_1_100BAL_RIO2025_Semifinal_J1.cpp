#include<bits/stdc++.h>
using namespace std;
#define int long long

const int MXN = 2e5 + 6;
const int MOD = 1e9 + 7;

void _(){
    int d;
    string s;
    cin >> s >> d;
    int minu = d % 60;
    int hour = d / 60;
    int cur_hr = (int)(s[0] - '0') * 10 + (int)(s[1] - '0');
    int cur_mn = (int)(s[3] - '0') * 10 + (int)(s[4] - '0');
    cur_hr = (cur_hr + hour) % 24;
    cur_mn = cur_mn + minu;
    if(cur_mn >= 60){
        cur_mn %= 60;
        cur_hr = (cur_hr + 1) % 24;
    }
    string hr = "", mn = "";
    if(cur_hr < 10) hr += '0';
    if(cur_mn < 10) mn += '0';
    hr += to_string(cur_hr);
    mn += to_string(cur_mn);
    cout << hr << ":" << mn << endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--)  _();
}
