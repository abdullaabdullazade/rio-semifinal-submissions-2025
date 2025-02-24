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
int n; cin >> n;
vector<pi> v(n);
for(int i = 0; i < n; i++){
    int x; cin >> x;
    v[i] = {x,i};
}
sort(v.begin(), v.end());
vector<int> a;
for(auto [x,y] : v){
    a.pb(y);
}
int cnt = 0;
//for(int i = 0; i < n; i++){
//    cout << a[i] + 1 << " ";
//}
//cout << endl;
for(int i = 0; i < n; ){
    cnt++;
    int last = a[i];
    i++;

    while(i < n and abs(a[i] - last) == 1){
        last = a[i];
        i++;
    }
}
cout << cnt << endl;
}
signed main(){
ios_base :: sync_with_stdio(0);
cin.tie(0); cout.tie(0);

int t = 1;
cin >> t;
while(t--){
    solve();
}
//cout << endl;
return 0;

}

