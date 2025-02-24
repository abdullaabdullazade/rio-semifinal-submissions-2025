#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_multiset;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define double long double

const int N = 2e5 + 5;
const int mod = 1e9 + 7;
const double eps = 1e-9;
const int INF = 1e18;

signed main(){
    fastio;
    int q;
    cin >> q;
    while(q--){
        string s;
        cin >> s;
        int n;
        cin >> n;
        string hr = s.substr(0, 2);
        string mn = s.substr(3);
        int hour = stoll(hr);
        int mnt = stoll(mn);
        mnt += n;
        if(mnt >= 60){
            hour += mnt / 60;
            mnt %= 60;
        }
        if(hour >= 24){
            hour %= 24;
        }
        if(hour < 10){
            cout << 0;
        }
        cout << hour;
        cout << ":";
        if(mnt < 10){
            cout << 0;
        }
        cout << mnt << '\n';
    }
}
