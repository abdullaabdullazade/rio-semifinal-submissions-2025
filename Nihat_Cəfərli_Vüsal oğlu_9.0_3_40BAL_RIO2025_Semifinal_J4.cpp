#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef tree<int , null_type , less<int> , rb_tree_tag , tree_order_statistics_node_update> indexed_set;
#define int long long
#define pb push_back
#define F first
#define S second
const int N = 2e5 + 5;
const int mod = 1e9 + 7;

int a[N];

void solve()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    indexed_set s;
    /**
    *s.find_by_order(i); -- s[i]
    s.order_of_key(x);
    x -in indexi , kicik olanlarin sayi
    */
    int ans = 0;
    for(int i = n - 1; i >= 0; i--){
        ans += s.order_of_key(a[i]);
        s.insert(a[i]);
    }
    if(s.size() < n){
        cout << "Yes" << '\n';
        return ;
    }
    cout << (ans % 2 ? "No" : "Yes") << '\n';

}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}
