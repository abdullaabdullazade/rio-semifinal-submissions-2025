#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int a[n];

        for ( int i = 0; i < 3; i++ )
        {
            cin >> a[i];
        }

        if ( a[0] <= a[1] && a[1] <= a[2] && a[0] <= a[2] )
        {
            cout << "Yes" << endl;
        }

        else if ( a[0] >= a[1] && a[1] <= a[2] && a[0] >= a[2] )
        {
            cout << "Yes" << endl;
        }

        else if ( a[0] <= a[1] && a[1] >= a[2] && a[0] >= a[2] )
        {
            cout << "Yes" << endl;
        }

        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}

