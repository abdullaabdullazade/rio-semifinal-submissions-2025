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
        vector<int> v(n);
        vector<pair<int, int>> v2(n);
        map<int, int> mp;
        bool bl = false;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            mp[v[i]]++;
            if(mp[v[i]] > 1){
                bl = true;
            }
            v2[i] = {v[i], i};
        }
        sort(v2.rbegin(), v2.rend());
        int mx1 = v2[0].first;
        int mx2 = v2[1].first;
        int mx3 = v2[2].first;
        int mx1idx = v2[0].second;
        int mx2idx = v2[1].second;
        int mx3idx = v2[2].second;
        vector<int> y;
        for(int i = 0; i < n; i++){
            if(v[i] == mx1){
                y.push_back(v[i]);
            }
            if(v[i] == mx2 && v[i] != mx1){
                y.push_back(v[i]);
            }
            if(v[i] == mx3 && mx3 != mx2 && mx3 != mx1){
                y.push_back(v[i]);
            }
        }
        /*
        for(int i : y){
            cout << i << " ";
        }
        cout << '\n';
        */
        int i = 0;
        bool b = false;
        while(i < 5 && !b){
            if(is_sorted(y.begin(), y.end())){
                b = true;
                break;
            }
            int a = y[0];
            int b = y[1];
            int c = y[2];
            y[0] = c;
            y[1] = a;
            y[2] = b;
            i++;
        }
        cout << (b || bl ? "Yes" : "No") << '\n';
        /*
        cout << mx1 << " " << mx1idx << '\n';
        cout << mx2 << " " << mx2idx << '\n';
        cout << mx3 << " " << mx3idx << '\n';
        */
    }
}

/**
5 7 1 3 9 2 3 8 10 6
1 5 7 3 9 2 3 8 10 6
1 2 5 7 3 9 3 8 10 6
1 2 3 5 7 8 8 10 6
*/

//atilla
