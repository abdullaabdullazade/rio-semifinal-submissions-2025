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
        for ( int i = 0 ; i < n ; i++ )
        {
            cin >> a[i];
        }
        int cnt = 1;
        int d = a[0];
        bool change = false;
        bool change1 = false;
        for ( int i = 1 ; i < n ; i++ )
        {
            if ( a[i] > d and change1 == false )
            {
                d = a[i];
                change = true;
            }
            else if ( a[i] < d and change == false )
            {
                d = a[i];
                change1 = true;
            }
            else if ( a[i] > d and change1 == true or a[i] < d and change == true )
            {
                cnt++;
                d = a[i];
                change = false;
                change1 = false;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
