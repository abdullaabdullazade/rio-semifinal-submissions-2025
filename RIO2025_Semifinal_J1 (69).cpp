#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define str string
#define F first
#define S second
#define B begin()
#define E end()
#define asagi_en "\n"
//⬛⬛⬛|||||⬛||||⬛⬛⬛|||⬛||⬛⬛⬛
//⬛||⬛|||⬛|⬛|||⬛||⬛||⬛||⬛|||
//⬛⬛⬛|||⬛⬛⬛⬛||⬛⬛⬛|||⬛||⬛⬛⬛
//⬛||⬛||⬛|||⬛||⬛||⬛||⬛|||||⬛
//⬛⬛⬛|||⬛|||⬛||⬛||⬛||⬛||⬛⬛⬛

using namespace std;

int main() {
    ll t;
    cin >> t;
    while(t--) {
        char c;
        ll ss, dd, d;
        cin >> ss >> c >> dd >> d;
        ll sa;
        dd += d;
        sa = dd / 60;
        dd = dd % 60;
        ss += sa;
        ss = ss % 24;
        if(ss % 10 == ss) cout << 0;
        cout << ss;
        cout << ':';
        if(dd % 10 == dd) cout << 0;
        cout << dd;
        cout << asagi_en;
    }

    return 0;
}
