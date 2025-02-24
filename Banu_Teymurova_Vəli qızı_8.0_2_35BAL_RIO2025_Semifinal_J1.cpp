#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    int d;
    int h;
    int m;
    char c = ':';
    int total;
    int ans;
    cin >> t;
    while(t--)
    {
        cin >> h >> c >> m;
        cin >> d;
        total = h*60 + m;
        ans = total +d;
        h = ans/60;
        if(h > 23)
        {
            h = h-24;
        }
        m = ans%60;
        if(m <= 9 && h <= 9)
        {
            cout << 0 << h << c << 0 << m<< endl;
        } else if(m <= 9 && h > 9)
        {
            cout << h << c << 0 << m << endl;
        } else if(m > 9 && h <= 9)
        {
            cout << 0 << h << c << m << endl;
        } else {
            cout << h << c << m << endl;
        }

    }
}
