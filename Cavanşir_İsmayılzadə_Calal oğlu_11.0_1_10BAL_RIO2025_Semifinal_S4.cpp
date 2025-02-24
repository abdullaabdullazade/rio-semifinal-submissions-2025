#include <bits/stdc++.h>
#define ll long long
#define emplace(a) emplace_back(a)
#define mp(a, b) make_pair(a, b)
#define all(a) a.begin(), a.end()
#define f first
#define s second
using namespace std;

int a[1001][1001];
void solve(){
    int n, k;
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < k; j++){
            cin >> a[i][j];
        }
    }

    ll mn = 1e18;
    for(int i = 0; i < k; i++){
        for(int j = 0; j < k; j++){
            mn = min(mn, 1ll * abs(a[0][i] - a[1][j]));
        }
    }
    cout << mn << "\n";

}

int main(){
    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }

}
