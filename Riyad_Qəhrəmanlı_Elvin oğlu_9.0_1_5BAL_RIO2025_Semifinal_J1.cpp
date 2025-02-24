// Alhamdulillah
#include <bits/stdc++.h>
using namespace std;
#define int long long
// bs, stl, dfs, bfs, djk, tp, bit, bf
void solve()
{
    string s;
    cin >> s;
    int d;
    cin >> d;
    int hour = (s[0] - '0') * 10 + (s[1] - '0');
    int mint = (s[3] - '0') * 10 + (s[4] - '0');
    mint += d;
    if (mint >= 60) {
        hour += mint / 60;
    }
    mint %= 60;
    hour %= 12;
    if (mint <= 9 and hour <= 9) {
        cout << "0" << hour << ":0" << mint << endl;
    } else if (mint <= 9 and hour > 9) {
        cout << hour << ":0" << mint << endl;
    } else if (mint > 9 and hour <= 9) {
        cout << "0" << hour << ":" << mint << endl;
    } else if (mint > 9 and hour > 9) {
        cout << hour << ":" << mint << endl;
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }
}
