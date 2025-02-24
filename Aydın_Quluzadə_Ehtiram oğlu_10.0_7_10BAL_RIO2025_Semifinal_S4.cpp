#include "bits/stdc++.h"
#define intt long long
#define vi vector<int>
#define vs vector<string>
#define vil vector<intt>
#define pii pair <int, int>
#define pll pair <intt, intt>
#define pb push_back
#define F first
#define S second
#define ld long double
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
using namespace std;
const int mod = 1e9 + 7;
const int MAXN = (1 << 18);
const int oo = 1e9 + 5;
int i, j;
int dx[] = {0, 0, 1, -1};
int dy[] = {-1, 1, 0, 0};
bool isPrime(int n){
    if(n == 1) return false;
    for(int i = 2; i*i <= n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
void solve(){
    int n, m;
    cin >> n >> m;
    if(n == 2){
        vi a(m), b(m);
        for(i = 0; i < m; i++) cin >> a[i];
        for(i = 0; i < m; i++) cin >> b[i];
        int mn = INT_MAX;
        for(i = 0; i < m; i++){
            for(j = 0; j < m; j++){
                mn = min(mn, abs(a[i]-b[j]));
            }
        }
        cout << mn << endl;
    }
    else{
        int arr[n][m];
        for(i = 0; i < n; i++){
            for(j = 0; j < m; j++){
                cin >> arr[i][j];
            }
        }
        cout << 0 << endl;
    }

}
signed main()
{
    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
