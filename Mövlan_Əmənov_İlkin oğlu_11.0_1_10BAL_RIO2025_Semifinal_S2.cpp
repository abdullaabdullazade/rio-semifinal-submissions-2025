#include <bits/stdc++.h>
//#include <bits/extc++.h>
//using namespace __gnu_pbds;
using namespace std;

#define ll long long
#define sn "\n"
#define sp " "
#define pii pair<int,int>
#define pb push_back
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
//#define int long long
//#define tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ord_set;

const int INF=1e9+7;
const ll LINF=1e18+9;
const int MAXN=2e5+7;
const int MOD=1e9+7;
ll binpow(ll a,ll b){
    if(b==0){
        return 1;
    }
    ll res=binpow(a,b/2);
    if(b%2)return ((res*res)%MOD*a)%MOD;
    return (res*res)%MOD;
}

void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>v=arr;
    sort(all(v));
    map<int,int>pos;
    for(int i=0;i<n;i++){
        pos[v[i]]=i;
    }
    int i=0;
    int res=0;
    while(i<n){
        bool t=1;
        while(i<n-1 && arr[i]<arr[i+1] && pos[arr[i+1]]-1==pos[arr[i]]){
            t=0;
           // cout<<arr[i]<<" ";
            i++;
        }
        if(t){
            while(i<n-1 && arr[i]>arr[i+1] && pos[arr[i]]-1==pos[arr[i+1]]){

                //cout<<arr[i]<<" ";
                i++;
            }
        }
       // cout<<arr[i]<<endl;
        res++;
        i++;
    }
    cout<<res<<endl;

}


signed main()
{
    ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
