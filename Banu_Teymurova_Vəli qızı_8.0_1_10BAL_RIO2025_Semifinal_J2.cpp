#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base:: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        int b[n];
        int cnt = 0;
        int diff = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a+n);
        for(int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        sort(b, b+n);
        do
        {
            for(int i = 0; i < n; i++)
            {
                if(a[i] >= b[i])
                {
                    diff++;
                }
            }
            if(diff == n)
            {
                cnt++;
            }
            diff = 0;
        } while(next_permutation(b, b+n));
        cout << cnt << endl;
    }

}
