#include<bits/stdc++.h>
using namespace std;
#define int long long

const int MXN = 1500 + 6;
const int MOD = 1e9 + 7;
const int INF = 1e18;

char a[MXN][MXN];
int p1[MXN][MXN], p2[MXN][MXN], p3[MXN][MXN], p4[MXN][MXN];

void _(){
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
            p1[i][j] = p1[i][j - 1] + (a[i][j] == '1');
            p2[i][j] = p2[i - 1][j] + (a[i][j] == '1');
        }
    }
    for(int i = n; i >= 1; i--){
        for(int j = m; j >= 1; j--){
            p3[i][j] = p3[i][j + 1] + (a[i][j] == '1');
            p4[i][j] = p4[i + 1][j] + (a[i][j] == '1');
        }
    }
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(p1[i][j - 1] == 0 && p3[i][j + 1] == 0 && p2[i - 1][j] == 0 && p4[i + 1][j] == 0){
                cnt++;
                continue;
            }
            if(p1[i][j - 1] == j - 1 && p3[i][j + 1] == m - j && p2[i - 1][j] == i - 1 && p4[i + 1][j] == n - i)
                cnt++;
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
