#pragma GCC optimize("O3")
#include <bits/stdc++.h>

using namespace std;

#define int long long
#define pb push_back
#define F first
#define S second
const int N = 2e5 + 5;
const int mod = 1e9 + 7;

int a[N];

void solve()
{

    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    set<int> s;
    int ans = 0;
    for(int i = n - 1; i >= 0; i--){
        auto it = s.lower_bound(a[i]);
        ans += distance(s.begin() , it); /// O(n)
        s.insert(a[i]);
    }
    if(s.size() < n){
        cout << "Yes" << '\n';
        return ;
    }
    cout << (ans % 2 ? "No" : "Yes") << '\n';

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
