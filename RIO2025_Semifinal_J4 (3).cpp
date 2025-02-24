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

    vector<int> v;

    for(int i=0;i<n;i++)
    {
        int x;

        cin>>x;

        v.push_back(x);
    }

    vector<int> order=v;

    sort(order.begin(),order.end());

    if(n==3)
    {
        if(v[0]==order[0] && v[1]==order[1] && v[2]==order[2])
            cout<<"Yes\n";
        else if(v[0]==order[2] && v[1]==order[0] && v[2]==order[1])
            cout<<"Yes\n";
        else if(v[0]==order[1] && v[1]==order[2] && v[2]==order[0])
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }

    else
    {
        if(n==3)
        {
            cout<<"No\n";

            return;
        }

        if(n==4)
        {
            cout<<"Yes\n";

            return;
        }

        if(n%2)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
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
