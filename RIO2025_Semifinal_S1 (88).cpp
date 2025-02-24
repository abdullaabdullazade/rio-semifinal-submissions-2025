#include <bits/stdc++.h>
#define int long long

const int sz = 1e6 + 5;
const int mod = 1e9 + 7;
int a[sz];

using namespace std;

void solve(){
    vector<int>v;
    int l, r;  cin >> l >> r;
    for(int i = l; i <= r; i++){
        string t, s = to_string(i);
        t = s;
        reverse(s.begin(), s.end());
        if(t == s)cout << "Palindrom!\n";
        else cout << i << '\n';
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(); cout.tie();

    int tc = 1;
//    cin >> tc;
    while(tc--)solve();
}
