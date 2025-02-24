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
    int n;

    cin>>n;

    vector<int> a,b;

    for(int i=0;i<n;i++)
    {
        int x;

        cin>>x;

        a.push_back(x);
    }

    for(int i=0;i<n;i++)
    {
        int x;

        cin>>x;

        b.push_back(x);
    }

    sort(a.begin(),a.end());

    sort(b.rbegin(),b.rend());

    int res=1;

    for(int i=0;i<n;i++)
    {
        int ind=lower_bound(a.begin(),a.end(),b[i])-a.begin();

        ind=n-ind;

        ind-=i;

        res*=ind;

        res%=MOD;
    }

    cout<<res<<'\n';
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
