#include<bits/stdc++.h>
using  namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i =  0; i < t; ++i)
    {
        string s;
        long long d;
        cin >> s >> d;
        int h = (s[0] - '0') * 10 + s[1] - '0';
        long long m = (s[3] - '0') * 10 + s[4] - '0';
        m += d;
        h += (m / 60);
        m = m % 60;
        h = h % 24;
        string ans ="";
        if(h < 10)
            ans += '0' + to_string(h);
        else
            ans += to_string(h);
        ans += ":";
        if(m < 10)
            ans += '0' + to_string(m);
        else
            ans += to_string(m);
        cout << ans << endl;
    }
}
