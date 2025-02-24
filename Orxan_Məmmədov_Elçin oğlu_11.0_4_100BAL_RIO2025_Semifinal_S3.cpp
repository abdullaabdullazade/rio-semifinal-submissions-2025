#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define F first
#define S second
const int N = 1e5 + 5;
const int mod = 1e9 + 7;

int a[N];

void solve()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    a[n] = a[0];
    vector<int> v;
    for(int i = 1; i <= n; i++){
        if(a[i] > a[i - 1])
            v.pb(i);
    }
    if(v.empty()){
        cout << 1 << '\n';
        cout << 1 << '\n';
        return ;
    }
    cout << v.size() << '\n';
    for(int i : v)
        cout << i << " ";
    cout << '\n';
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}
