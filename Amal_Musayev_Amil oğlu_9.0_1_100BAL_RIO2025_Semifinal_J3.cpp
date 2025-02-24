#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, ans = 0;
    string s;
    cin >> n >> m;

    vector<int> setir(n, 0), sutun(m, 0);
    vector<string> a(n);

    for ( int i = 0; i < n; i++ )
    {
        cin >> s;
        a[i] = s;

        for ( int j = 0; j < s.size(); j++ )
        {
            if ( s[j] == '1' )
            {
                setir[i]++;
                sutun[j]++;
            }
        }
    }

    for ( int i = 0; i < n; i++ )
    {
        for ( int j = 0; j < m; j++ )
        {
            if( setir[i] == 0 && sutun[j] == 0 )
            {
                ans++;
            }

            else if( setir[i] == m && sutun[j] == n )
            {
                ans++;
            }

            else if ( setir[i] == 1 && sutun[j] == 1 )
            {
                s = a[i];

                if ( s[j] == '1' )
                {
                    ans++;
                }
            }

            else if ( setir[i] == m-1 && sutun[j] == n-1 )
            {
                s = a[i];

                if ( s[j] == '0' )
                {
                    ans++;
                }
            }
        }
    }

    cout << ans;

    return 0;
}
