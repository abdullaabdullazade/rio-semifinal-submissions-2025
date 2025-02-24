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
    int t = 1;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n] , b[n]; int all = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for(int i = 0; i < n; i++)
        {
            b[i] = abs(a[i] - a[i + 1]);
            if(i == n - 1) b[i] = abs(a[i] - a[0]);
            all += b[i];
        }
        map < int , vector < int > > mp;
        int sum = 0;
        for(int i = 0; i < n; i++)
        {
            if(i == 0)
            {
                mp[b[i]].push_back(1); sum += b[i]; continue;
            }
            if(mp[b[i]].empty())
            {
                mp[b[i]].push_back(i + 1);
            }
            //sum += b[i];
            vector < int > v1 = mp[sum];
            sum += b[i];
            v1.push_back(i + 1);
            mp[sum] = v1;
            for(auto &i : mp)
            {
                if(sum - i.first == 0) continue;
                vector < int > v2 = i.second;
                map < int , int > is;
                for(auto &j : v2)
                {
                    is[j] = 1;
                }
                vector < int > res;
                for(auto &j : v1)
                {
                    if(is[j] == 0)
                    {
                        res.push_back(j);
                    }
                }
                mp[sum - i.first] = res;
            }
        }
        for(auto &i : mp)
        {
            cout << i.first << endl;
            vector < int > res = i.second;
            for(auto &j : res)
            {
                cout << j << ' ';
            }
            cout << endl;
        }
        continue;
        bool olar = 0;
        for(auto &i : mp)
        {
            if(i.first * 2 == all)
            {
                olar = 1;
                vector < int > cavab = i.second;
                cout << cavab.size() << endl;
                for(auto &j : cavab)
                {
                    cout << j << ' ';
                }
                break;
            }
        }
        if(olar == 0)
        {
            cout << -1;
        }
        cout << endl;
    }
}
