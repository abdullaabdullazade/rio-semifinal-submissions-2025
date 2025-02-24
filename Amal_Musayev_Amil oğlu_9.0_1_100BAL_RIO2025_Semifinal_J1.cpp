#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, h, m, addedH, d;
    char c;
    cin >> t;

    while ( t-- )
    {
        cin >> h >> c >> m >> d;

        addedH = d / 60;
        m += d % 60;

        if ( m >= 60 )
        {
            m-=60;
            addedH++;
        }

        h += addedH;

        if ( h >= 24 )
        {
            h = h - (h/24)*24;
        }

        if ( h < 10 && m < 10 )
        {
            cout << '0' << h << ':' << '0' << m << endl;
        }

        else if ( h < 10 && m >= 10 )
        {
            cout << '0' << h << ':' << m << endl;
        }

        else if ( h >= 10 && m < 10 )
        {
            cout << h << ':' << '0' << m << endl;
        }

        else
        {
            cout << h << ':' << m << endl;
        }
    }

    return 0;
}
