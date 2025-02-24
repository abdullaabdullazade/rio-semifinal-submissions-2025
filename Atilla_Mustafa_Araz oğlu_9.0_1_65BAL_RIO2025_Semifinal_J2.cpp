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
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> boxes(n);
        vector<int> toys(n);
        for(int i = 0; i < n; i++){
            cin >> boxes[i];
        }
        map<int, int> mp;
        for(int i = 0; i < n; i++){
            int a;
            cin >> a;
            toys[i] = a;
            mp[a]++;
        }
        sort(boxes.begin(), boxes.end());
        sort(toys.begin(), toys.end());
        vector<int> x(n);
        for(int i = 0; i < n; i++){
            auto it = upper_bound(toys.begin(), toys.end(), boxes[i]);
            if(it == toys.begin()){
                x[i] = 0;
            }else{
                it--;
                ///x[i] = *it;
                x[i] = *it;
            }
        }
        /*
        for(int i : x){
            cout << i << ' ';
        }
        cout << '\n';*/
        int ans = 1;
        int decrease = 0;
        for(int i = 0; i < n; i++){
            int a = -1;
            for(int j = 0; j < n; j++){
                if(toys[j] == x[i]){
                    a = j;
                }
            }
            //cout << a << " ";
            if(a == -1){
                ans *= 0;
            }
            ans *= (a + 1 - decrease);
            ans %= mod;
            decrease++;
        }
        //cout << '\n';
        cout << ans << '\n';
    }
}

/**
2 3 4
1 2 3

1 2 3
1 3 2
2 1 3
2 3 1







2 3 3
2 3 3
1 2 3

1 2 3
1 3 2



5 10 8
9 4 5

5 8 10
4 5 9


2 2 3 3
2 2 3 3
1 2 3 4

1 2 3 4
1 2 4 3
2 1 3 4
2 1 4 3


3 * 3 * 3
3 4 5 6 7
1 2 3 4 5

1 2 3 4 5
1 2 3 5 4
1 2 4 3 5
1 2 4 5 3
1 2 5 3 4
1 2 5 4 3
1 3 ucun eyniler
1 4 ucun de eyniler

2 1 ucun eyniler
2 3 eyniler
2 4 eyniler

3 1
3 2
3 4

9 * 3!
*/

//atilla
