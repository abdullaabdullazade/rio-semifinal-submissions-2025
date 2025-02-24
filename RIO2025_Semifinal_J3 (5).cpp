#include<bits/stdc++.h>
using namespace std;
#define int long long

const int MXN = 1500 + 6;
const int MOD = 1e9 + 7;
const int INF = 1e18;

int n, m;
char a[MXN][MXN];

bool ok(int i, int j){
    bool f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    int ii = i, jj = j;
    map < int , int > vis;
    while(ii < n - 1){
        ii++;
        vis[(int)(a[ii][j] - '0')] = 1;
    }
    if(!(vis[0] && vis[1]))
        f1 = 1;
    while(jj < m - 1){
        jj++;
        vis[(int)(a[i][jj] - '0')] = 1;
    }
    if(!(vis[0] && vis[1]))
        f2 = 1;
    ii = i, jj = j;
    while(ii > 0){
        ii--;
        vis[(int)(a[ii][j] - '0')] = 1;
    }
    if(!(vis[0] && vis[1]))
        f3 = 1;
    while(jj > 0){
        jj--;
        vis[(int)(a[i][jj] - '0')] = 1;
    }
    if(!(vis[0] && vis[1]))
        f4 = 1;
    return (f1 == 1 && f2 == 1 && f3 == 1 && f4 == 1);
}

void _(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(ok(i, j)){
                cnt++;
            }
        }
    }
    cout << cnt << endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    //cin >> t;
    while(t--)  _();
}
