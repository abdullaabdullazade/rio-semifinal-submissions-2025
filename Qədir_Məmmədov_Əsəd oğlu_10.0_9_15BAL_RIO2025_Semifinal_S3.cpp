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
int a[N],b[N];
bool visa[N];
void solve(int testcase) {
    #define tests
    int n;
    cin>>n;
    for (int i=1;i<=n;i++) cin>>a[i];
    a[n+1]=a[1];
    int sum=0;
    for (int i=1;i<=n;i++) {
        b[i]=abs(a[i]-a[i+1]);
        visa[i]=0;
        sum+=b[i];
    }
    if (sum&1) {
        cout<<-1<<'\n';
        return;
    } 
    int s1=sum/2,s2=s1;
    vi g1,g2;
    vector<int> dp(sum+1,inf);
    dp[0]={0};
    int nw=0;
    for (int j=1;j<=n;j++) {
    for (int i=1;i<=sum/2;i++) {
            if (i>=b[j]){
                if(dp[i-b[j]]!=inf) {
                dp[i]=j;
                }
            }
        }
    }
    vector<int> res;
    sum/=2;int rans=sum;
    if (dp[sum]==inf) {
        cout<<-1<<'\n';
        return;
    }
    auto cur=dp[sum];
    while(cur!=0) {
        res.push_back(cur);
        visa[cur]=1;
        sum-=b[cur];
        cur=dp[sum];
    }
    for (int i=1;i<=n;i++) {
        if (!visa[i]) nw+=b[i];
    }
    if (nw!=rans) {
        cout<<-1<<'\n';
        return;
    }
    cout<<res.size()<<'\n';
    for (int i :res) {
        cout<<i<<" ";
    }
    cout<<'\n';

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