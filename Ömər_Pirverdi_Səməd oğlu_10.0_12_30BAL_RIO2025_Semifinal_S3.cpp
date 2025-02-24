#include<bits/stdc++.h>
using namespace std;
string dp[10001];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, cnt = 0;
        cin >> n;
        int a[n];
        int b[n];
        for ( int i = 0 ; i < n ; i++ )
        {
            cin >> a[i];
        }
        for ( int i = 0 ; i < n ; i++ )
        {
            if ( i == n - 1 )
            {
                b[n - 1] = abs(a[n - 1] - a[0]);
            }
            else
            {
                b[i] = abs(a[i] - a[i + 1]);
            }
            cnt += b[i];
        }
        for ( int i = 0 ; i < 10001 ; i++ )
        {
            dp[i] = "";
        }
        bool change = false;
        for ( int i = 0 ; i < n ; i++ )
        {
            for ( int j = cnt ; j >= b[i] ; j-- )
            {
                if ( j == cnt / 2 and dp[j] != "" )
                {
                    int cnt1 = 0;
                    for ( int t = 0 ; t < dp[j].size() - 1 ; t++ )
                    {
                        if ( dp[j][t] == ' ' )
                        {
                            cnt1++;
                        }
                    }
                    cout << cnt1 + 1 << endl;
                    cout << dp[j] << endl;
                    change = true;
                    break;
                }
                if ( dp[j] == "" and ( dp[j - b[i]] != "" or j - b[i] == 0 ) )
                {
                    dp[j] = dp[j - b[i]] + to_string(i + 1) + " ";
                }
            }
            if (change)
            {
                break;
            }
        }
    }
}























