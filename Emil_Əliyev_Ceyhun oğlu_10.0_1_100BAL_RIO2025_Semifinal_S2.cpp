#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

const int N = 1e5 + 5;
const int INF = 1e18;

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    /// bismillah
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n + 1] , b[n + 1];
        for(int i = 1; i <= n; i++)
        {
            cin >> a[i]; b[i] = a[i];
        }
        if(n == 1)
        {
            cout << 1 << endl;
            continue;
        }
        map < int , pair < int , int > > mp;
        sort(b + 1 , b + n + 1);
        for(int i = 1; i <= n; i++)
        {
            if(i == 1)
            {
                mp[b[i]] = {b[i + 1] , 0};
            }
            else if(i == n)
            {
                mp[b[i]] = {b[i - 1] , 0};
            }
            else{
                mp[b[i]] = {b[i - 1] , b[i + 1]};
            }
        }
        int say = 0;
        for(int i = 1; i <= n; i++)
        {
            pair < int , int > p = mp[a[i]];
            if(a[i + 1] == p.first || a[i + 1] == p.second)
            {
                continue;
            }
            else{
                say++;
            }
        }
        cout << say << endl;
    }
}
