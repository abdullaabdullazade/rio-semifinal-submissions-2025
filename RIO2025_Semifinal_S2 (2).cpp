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
vector<int> v(n);
for(int i = 0; i < n; i++) cin >> v[i];
//vector<int> a,b;C
int cnt = 0;
for(int i = 0; i < n; ){
    if(i == n - 1){
        cnt++;
        break;
    }
    int a = v[i];
    int b = v[i + 1];
    if(v[i] < v[i + 1]){
        int last = v[i];
        i++;
        cnt++;
        while(i < n and v[i] > last){
            last = v[i];
            i++;
        }
    }
    else if(v[i] > v[i + 1]){
        int last = v[i];
        i++;
        cnt++;
        while(i < n and v[i] < last){
            last = v[i];
            i++;
        }
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

