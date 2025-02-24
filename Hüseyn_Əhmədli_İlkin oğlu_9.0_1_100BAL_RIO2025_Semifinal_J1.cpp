#include<bits/stdc++.h>

using namespace std;

//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>

//using namespace __gnu_pbds;

//#define ordered_set tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>

#define int long long

const int sz=2e5+5;

const int INF=1e18;

const int MOD=1e9+7;

void solve()
{
    int a,b;

    char c;

    cin>>a>>c>>b;

    int d;

    cin>>d;

    b+=d;

    if(b>=60)
        a+=b/60;

    b%=60;

    a%=24;

    if(a<10)
        cout<<0;

    cout<<a<<':';

    if(b<10)
        cout<<0;

    cout<<b<<'\n';
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t=1;

    cin>>t;

    while(t--)
    {
        solve();
    }
}
