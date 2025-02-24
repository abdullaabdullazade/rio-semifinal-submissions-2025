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
    int n; cin >> n;
    vi v(n);
    for(i = 0; i < n; i++) cin >> v[i];
    int sum1 = 0, sum2 = 0;
    for(i = 1; i <= n; i++) sum1 += i;
    for(i = 0; i < n; i++) sum2 += v[i];
    vi v2 = v;
    reverse(all(v2));
    if(is_sorted(all(v)) or is_sorted(all(v2))) cout << 1 << endl;
    else if(sum1 == sum2){
        vi res;
        int cnt = 0;
        for(i = 0; i < n-1; i++){
            if(abs(v[i]-v[i+1]) == 1) cnt++;
            else{
                res.pb(v[i]);
                if(cnt > 0){
                    res.pb(cnt);
                    cnt = 0;
                }
                i++;
            }
        }
        cout << res.size()+1 << endl;
    }
    else{
        vi x1, x2;
        for(i = 0; i < n/2; i++) x1.pb(v[i]);
        for(i = n/2; i < n; i++) x2.pb(v[i]);
        if(is_sorted(all(x1)) or is_sorted(all(x2))) cout << 2 << endl;
        else{
            reverse(all(x1));
            reverse(all(x2));
            if(is_sorted(all(x1)) or is_sorted(all(x2))) cout << 2 << endl;
        }
    }
}
signed main()
{
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
