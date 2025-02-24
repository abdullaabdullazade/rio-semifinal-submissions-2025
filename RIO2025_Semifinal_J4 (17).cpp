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
    for(int i = 0; i < n; i++)
        cin >> a[i];

    if(a[0] <= a[1] && a[1] <= a[2])
        cout << "Yes" << '\n';
    else if(a[2] <= a[0] && a[0] <= a[1])
        cout << "Yes" << '\n';
    else if(a[1] <= a[2] && a[2] <= a[0])
        cout << "Yes" << '\n';
    else
        cout << "No" << '\n';
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
