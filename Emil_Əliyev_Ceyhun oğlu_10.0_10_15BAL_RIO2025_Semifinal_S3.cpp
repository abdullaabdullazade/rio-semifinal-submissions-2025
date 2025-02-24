#include "bits/stdc++.h"
#define int long long
#define endl '\n'
using namespace std;

const int N = 1e9 + 7;
const int INF = 1e18;
const int MOD = 16714589;


signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    /// bismillah
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n + 1];
        for(int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        vector < int > b;
        b.push_back(-1);
        for(int i = 1; i <= n; i++)
        {
            if(i == n)
            {
                b.push_back(abs(a[n] - a[1]));
            }
            else{
                b.push_back(abs(a[i] - a[i + 1]));
            }
        }
        vector < int > res;
        for(int i = 2; i <= n; i++)
        {
            if(a[i] - a[i - 1] > 0)
            {
                res.push_back(i - 1);
            }
        }
        if(a[1] - a[n] >= 0)
        {
            res.push_back(n);
        }
        cout << res.size() << endl;
        for(auto &i : res)
        {
            cout << i << ' ';
        }
        cout << endl;
    }
}