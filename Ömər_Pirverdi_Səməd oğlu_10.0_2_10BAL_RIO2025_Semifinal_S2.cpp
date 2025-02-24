#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        bool change = true;
        bool change1 = true;
        for ( int i = 0 ; i < n ; i++ )
        {
            cin >> a[i];
        }
        for ( int i = 0 ; i < n - 1 ; i++ )
        {
            if ( a[i] > a[i + 1] )
            {
                change = false;
            }
        }
        for ( int i = n - 1 ; i > 0 ; i-- )
        {
            if ( a[i] > a[i - 1] )
            {
                change1 = false;
            }
        }
        if ( change == true or change1 == true )
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }
    return 0;
}
