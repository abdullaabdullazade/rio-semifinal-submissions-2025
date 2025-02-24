/*
#ifndef ONLINE_JUDGE
#include "AkbarKING.h"
#else
#define debug(...)
#define debugArr(...)
#define debugG(...)
#endif
*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define int long long
#define $AzH_TxdmN$ ios_base::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);
/*
#pragma GCC target("sse,sse2,sse3,ssse3,popcnt,abm,mmx,tune=native")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("no-stack-protector")
#pragma GCC optimize("unroll-loops")
#pragma GCC optimize("fast-math")
*/

/*
#define NaxcivanlilaraEkranKaydiAlmayaSonOnlardaInsanKimiKocureBilerlerVeSecmedeGCD100LeyeBilerler dp[1][1];
#define Aliyyakbar dp[i][j]
#define MirrehimM dp[0][0]
#define Xanlar dp[i-1][j]
#define Elay dp[i][j-1]
#define Rufo dp[i-1][j-1]
#define Yusif dp[i+1][j]
#define Sayad dp[i][j+1]
#define Sumuraz dp[i+1][j+1]
#define Cebrayil dp[i+1][j-1]
#define Riyad dp[n][m]
#define Huseyn dp[n-1][m]
#define Zako dp[n][m-1]
#define Abdulla dp[n-1][m-1]
#define Subhan dp[n+1][m]
#define Others dp[i-1][j+1]
*/

#define ep emplace_back
#define pb push_back
#define pii pair<int,int>
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

#define heapq vector<int>, vector<vector<int>>, greater<vector<int>>
using namespace std;
using namespace __gnu_pbds;

template <typename T>
using __indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using __indexed_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

mt19937_64 rng(chrono::steady_clock().now().time_since_epoch().count());

const int sz = 3e5 + 9;
const int LOG = 63;
const int MOD = 1e9 + 7;
const int INF = 1e18;
int a[sz], dp[sz];

int n;

void solve()
{
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }
    for (int i = 1; i < n; ++i)
    {
        dp[i] = a[i] - a[i + 1];
    }
    dp[n] = a[n] - a[1];
    vector<int> ind;
    for (int i = 1; i <= n; ++i)
    {
        if (dp[i] >= 0)
        {
            ind.ep(i);
        }
    }
    if ((int)ind.size() == n)
    {
        cout << "1\n1\n";
        return;
    }
    cout << (int)ind.size() << '\n';
    for (int i = 0; i < (int)ind.size(); ++i)
    {
        cout << ind[i] << " \n"[i == (int)ind.size() - 1];
    }
}

signed main()
{
    $AzH_TxdmN$
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
