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

int prefx[2000],prefy[2000],arr[2000][2000];

char input[2000][2000];

void solve()
{
    int n,m;

    cin>>n>>m;

    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            cin>>input[i][j];

    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            arr[i][j]=input[i][j]-'0';

    for(int i=1;i<=n;i++)
    {
        int sum=0;

        for(int j=1;j<=m;j++)
            sum+=arr[i][j];

        prefx[i]=sum;
    }

    for(int i=1;i<=m;i++)
    {
        int sum=0;

        for(int j=1;j<=n;j++)
            sum+=arr[j][i];

        prefy[i]=sum;
    }

    int res=0;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            int curx=prefx[i]-arr[i][j],cury=prefy[j]-arr[i][j];

            if((curx==0 && cury==0) || (curx==(m-1) && cury==(n-1)))
                res++;
        }
    }

    cout<<res;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t=1;

    //cin>>t;

    while(t--)
    {
        solve();
    }
}
