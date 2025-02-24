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
    int n, m;
    cin >> n >> m;
    bool grid[n][m];
    int row[n];
    fill(row, row + n, 0);
    int column[m];
    fill(column, column + m, 0);
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        for(int j = 0; j < m; j++){
            grid[i][j] = (s[j] - '0' ? 1 : 0);
            row[i] += (grid[i][j] ? 1 : 0);
            column[j] += (grid[i][j] ? 1 : 0);
        }
    }
    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(grid[i][j]){
                if(((row[i] == m) && (column[j] == n)) || ((row[i] == 1) && (column[j] == 1))){
                    ans++;
                   }
            }else{
                if(((row[i] == m - 1) && (column[j] == n - 1)) || ((row[i] == 0) &&(column[j] == 0))){
                    ans++;
                }
            }
        }
    }
    cout << ans << '\n';
    /*
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << i << " " << j << " " << row[i] << " " << column[i] << " " << grid[i][j] << '\n';
        }
    }
    */
}

//atilla
