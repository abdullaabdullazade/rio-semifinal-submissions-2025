#include <bits/stdc++.h>
#include <bits/extc++.h>
using namespace std;
using namespace __gnu_pbds;
#define int long long
#define FF first
#define SS second
#define pb push_back
#define endl "\n"
#define pi pair<int,int>
#define ld long double
#define oset tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update>
#define omset tree<int,null_type,less_eqal<int>,rb_tree_tag, tree_order_statistics_node_update>

const int INF = 1e18 + 6;
const int MOD = 1e9 + 7;
const int sz  = 2e5 + 5;

int pow(int a, int b, int c){
if(b == 0) return 1;
int res = pow(a, b / 2, c);
res *= res;
res %= c;
if(b % 2 == 1) res *= a;
return res % c;
}
void solve(){
int n,m; cin >> n >> m;
vector<vector<int>> v(n + 1, vector<int> (m + 1,0));
set<int> st;
for(int i = 1; i <= n; i++){
    for(int j = 1; j <= m; j++){
        cin >> v[i][j];
        st.insert(v[i][j]);
    }
    sort(v[i].begin(), v[i].end());
}
int mn = INF;
for(auto x : st){
    int r = 0;
    bool ok = 0;
    bool p = 1;
    for(int i = 1; i <= n; i++){
        int pos = lower_bound(v[i].begin(), v[i].end(),x) - v[i].begin();
        if(pos == v[i].size()){
            r = INF;
            p = 0;
            break;
        }
        if(v[i][pos] == x and !ok){
            ok = 1;
            //cout << i << " " << x << endl;
            continue;
        }
        r = max(r,v[i][pos]);
       // cout << i << " " << x << "  " << v[i][pos] << endl;
    }
    if(!p) break;
    //cout << x << " " << r << endl;
    mn = min(mn, abs(r - x));
}
cout << mn << endl;
}
signed main(){
ios_base :: sync_with_stdio(0);
cin.tie(0); cout.tie(0);

int t = 1;
//cin >> t;
while(t--){
    solve();
}
//cout << endl;
return 0;

}

