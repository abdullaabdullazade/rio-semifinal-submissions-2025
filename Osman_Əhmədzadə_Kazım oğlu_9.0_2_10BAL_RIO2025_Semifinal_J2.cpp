#include<bits/stdc++.h>
using namespace std;
#define int long long

const int MXN = 2e5 + 6;
const int MOD = 1e9 + 7;
const int INF = 1e18;

void _(){
    int n;
    cin >> n;
    vector < int > a(n);
    vector < int > b(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n; i++)
        cin >> b[i];
    sort(b.begin(), b.end());
    int ans = 0;
    bool f = 1;
    for(int i = 0; i < n; i++){
        if(a[i] < b[i])
            f = 0;
    }
    if(f)   ans++;
    while(next_permutation(b.begin(), b.end())){
        f = 1;
        for(int i = 0; i < n; i++){
            if(a[i] < b[i])
                f = 0;
        }
        if(f)   ans++;
    }
    cout << ans << endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--)  _();
}
