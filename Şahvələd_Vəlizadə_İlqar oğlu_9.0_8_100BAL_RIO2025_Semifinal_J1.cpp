//azxantrop

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
// #define int long long

signed main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);

    int n,m;
    string k;
    cin >> n >> m;
    if (n==1 && m==1){
        cout << 1;
        return 0;
    }
    vector<vector<int>> grid(n, vector<int> (m));
    vector<vector<int>> col(m, vector<int> (2));
    vector<vector<int>> row(n, vector<int> (2));

    for(int i = 0; i < n; i++){
        cin >> k;
        int c0=0;
        int c1=0;
        for(int j = 0; j < m; j++){
            if(k[j]=='0'){
                c0++;
                grid[i][j]=0;
            }
            else{
                c1++;
                grid[i][j]=1;
            }


        }
        row[i][0]=c0;
        row[i][1]=c1;
    }

    for(int i = 0; i < m; i++){
        int c0=0;
        int c1=0;
        for(int j = 0; j < n; j++){
            if(grid[j][i]==1){
                c1++;
            }
            else{
                c0++;
            }
        }
        col[i][0]=c0;
        col[i][1]=c1;
    }

    int res = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            row[i][grid[i][j]] -= 1;
            col[j][grid[i][j]] -= 1;

            if(row[i][0] == 0 and col[j][0] == 0){
                res++;
            }
            if(row[i][1] == 0 and col[j][1] == 0){
                res++;
            }

            row[i][grid[i][j]] += 1;
            col[j][grid[i][j]] += 1;


        }
    }
    cout << res;

    return 0;
}
