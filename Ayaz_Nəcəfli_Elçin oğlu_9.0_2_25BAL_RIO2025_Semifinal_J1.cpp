#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int hh,mm,d;
    char c;
    cin >> hh >> c >> mm >> d;
    hh = (hh + (mm + d) / 60) % 24;
    mm = (mm + d) % 60;
    if(hh <= 9)
        cout << 0;
    cout << hh;
    cout << c;
    if(mm <= 9)
        cout << 0;
    cout << mm;
    cout << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}
