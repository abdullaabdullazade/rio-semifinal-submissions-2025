/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define F_A_S_T_I_O cin.tie(0)->sync_with_stdio(0)
//#define int long long

const int N = 1500;
char a[N][N];
int n , m , ok , r[0] , c[0];


signed main() {

    F_A_S_T_I_O;

    cin >> n >> m;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            cin >> a[i][j];
            int k = a[i][j] - '0';
            c[j] += k;
                r[i] += k;
        }
    }
    for(int i = 1; i<= n; i++) {
        for(int j =1; j <= m; j++) {
            int x = r[i] - a[i][j] - '0';
            int y = c[i] - a[i][j] - '0';
            if(x == 0 && y == 0) ok++;
            if(x == n - 1 && y == n - 1) ok++;
        }
    }
    cout << ok;
}


*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define F_A_S_T_I_O cin.tie(0)->sync_with_stdio(0)
#define int long long


void solve() {
    int n;
    cin >> n;
    vector<int> a(n) , b(n);
    for(int &i : a) cin >> i;
    for(int &i : b) cin >> i;
    sort(a.begin() , a.end());
    int res = 0;
    do{
        bool ok = 1;
        for(int i = 0; i < n; i++)
            ok &= (b[i] <= a[i]);
        res += ok;
    } while(next_permutation(a.begin() , a.end()));
    cout << res;
}
signed main() {

    F_A_S_T_I_O;

    int t = 1;
    cin >> t;
    while(t--) {

        solve();
        cout << '\n';
    }
}





