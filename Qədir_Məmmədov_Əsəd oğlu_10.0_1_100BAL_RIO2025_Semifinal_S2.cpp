#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ids tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>
#define ll long long
#define pi pair<int,int>
#define ve vector
#define vi vector<int>
#define vii vector<vector<int>>
#define int ll
#define fi first
#define lb lower_bound
#define ub upper_bound
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define se second
#define rep(i,n) for (int i=1;i<=n;i++)
using namespace std;
#define debug(n,m) cout<<#n<<":"<<n<<m

mt19937 rng(chrono::steady_clock().now().time_since_epoch().count());

int gcd(int a,int b) {
    if (b==0) return a;
    return gcd(b,a%b);
}

int lcm(int a,int b) {
    return a /gcd(a,b)*b;
}

const ll mod=1e9+7;
const ll inf=(1ll<<55);
const ll N=2e5+20;
int a[N+10],b[N+10];
void solve(int testcase) {
    #define tests
    int n;
    cin>>n;
    map<int,int> mp;
    for (int i=1;i<=n;i++) cin>>a[i],mp[a[i]]=i;
    int cur=0,res=0;
    sort(a+1,a+n+1);
    for (int i=1;i<=n;i++) {
        if (abs(mp[a[i]]-cur)==1||cur==0){cur=mp[a[i]]; continue;};
        res++;
        cur=mp[a[i]];
    }
    cout<<res+1<<'\n';
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tt=1,cont=1;
    #ifdef tests
    cin>>tt;
    cont=tt;
    #endif 
    while(tt--) {
        solve(cont-tt);
    }
}