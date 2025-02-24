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

bool isp(ll n){
    string s=to_string(n);
    //3443
    int x=s.size();
    for(int i=0;i<x/2;i++){
        if(s[i]!=s[x-1-i]){
            return false;
        }
    }
    return true;
}
void solve(){
        ll l,r;
        cin>>l>>r;
        for(ll i=l;i<=r;i++){
            if(isp(i)){
                cout<<"Palindrome!"<<sn;
            }
            else{
                cout<<i<<sn;
            }
        }

}


signed main()
{
    ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
