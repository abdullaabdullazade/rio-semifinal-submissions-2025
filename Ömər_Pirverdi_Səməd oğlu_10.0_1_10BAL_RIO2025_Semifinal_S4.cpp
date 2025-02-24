#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    if ( n == 2 )
    {
        int a[k];
        int b[k];
        for ( int i = 0 ; i < k ; i++ )
        {
            cin >> a[i];
        }
        for ( int i = 0 ; i < k ; i++ )
        {
            cin >> b[i];
        }
        int minn = 1000000000;
        for ( int i = 0 ; i < k ; i++ )
        {
            for ( int j = 0 ; j < k ; j++ )
            {
                minn = min(minn, abs(a[i] - b[j]));
            }
        }
        cout << minn;
        return 0;
    }
}
