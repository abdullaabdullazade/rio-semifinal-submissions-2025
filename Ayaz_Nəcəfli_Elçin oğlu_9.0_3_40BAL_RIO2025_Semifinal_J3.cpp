#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000000 + 7;
void solve()
{
    int n,m;
    cin >> n >> m;
    vector<vector<int>>g(n,vector<int>(m));
    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for(int j = 0; j < m; j++)
        {
            g[i][j] = s[j] - 48;
        }
    }
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            int cnt_i_1 = 0;
            int cnt_i_0 = 0;
            int cnt_j_1 = 0;
            int cnt_j_0 = 0;
            for(int k = 0; k < j; k++)
            {
                if(g[i][k]) cnt_j_1++;
                else cnt_j_0++;
            }
            for(int k = j + 1; k < m; k++)
            {
                if(g[i][k]) cnt_j_1++;
                else cnt_j_0++;
            }
            if(cnt_j_1 == m - 1 || cnt_j_0 == m - 1)
            {
                for(int k = 0; k < i; k++)
                {
                    if(g[k][j]) cnt_i_1++;
                    else cnt_i_0++;
                }
                for(int k = i + 1; k < n; k++)
                {
                    if(g[k][j]) cnt_i_1++;
                    else cnt_i_0++;
                }
                if(cnt_i_1 == n - 1 || cnt_i_0 == n - 1)
                {
                    if(cnt_i_1+cnt_j_1==n-1+m-1 || cnt_i_0 + cnt_j_0==n-1+m-1){
                        ans++;
                    }
                }
            }
        }
    }
    cout << ans << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    //cin >> t;
    while(t--) solve();
    return 0;
}
