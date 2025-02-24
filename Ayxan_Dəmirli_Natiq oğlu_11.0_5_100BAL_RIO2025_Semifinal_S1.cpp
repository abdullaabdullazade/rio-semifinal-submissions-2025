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
int n,m;
int res=INF;
vector<vector<int>>arr;
bool check(int x,int y,int id1,int id2){
    if(x>y)swap(x,y);
    for(int i=0;i<n;i++){
        if(i==id1 || i==id2)continue;
        auto it=upper_bound(all(arr[i]),y);
        auto it1=lower_bound(all(arr[i]),x);
        if(it1== arr[i].end() || it1==arr[i].end()){
            return false;
        }
        int idx2=(it-arr[i].begin()+1)-(it1-arr[i].begin()+1);
        if(idx2<=0){
            return false;
        }
    }
    return true;
}
void solve(){

    cin>>n;
    cin>>m;
    vector<vector<int>>brr(n,vector<int>(m));
    arr=brr;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
        sort(all(arr[i]));
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            for(int k=0;k<n;k++){
                for(int z=0;z<m;z++){
                    if(k==i)continue;
                    if(check(arr[i][j],arr[k][z],i,k)){
                        res=min(res,abs(arr[i][j]-arr[k][z]));
                    }
                }
            }
        }
    }
    cout<<res;



}


signed main()
{
    ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    int t=1;
   // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
