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
const ll N=1e5+20;

bool pali(int n){
    int k=n;
    int sz=0;
    string s;
    while(k!=0) {
        s.push_back(k%10+'0');
        k/=10;
        sz++;
    }
    s='$'+s;
    for (int i=1;i<=sz/2;i++) {
        if (s[i]!=s[sz-i+1]) {
            return false;
        }
    }
    return true;
}

void solve(int testcase) {
    int l,r;
    cin>>l>>r;
    for (int i=l;i<=r;i++) {
        if (pali(i)) {
            cout<<"Palindrom!\n";
        }
        else cout<<i<<'\n';
    }
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